let text = ReasonReact.stringToElement;

[@bs.deriving jsConverter]
type caroselItem = {
  src: string,
  altText: string,
  caption: string,
};

type state = {
  activeIndex: int,
  animating: bool,
};

type action =
  | NoOp
  | Next
  | Previous
  | GoToIndex(int)
  | OnExited
  | OnExiting
;

let slides = (items, send) =>
  Belt.List.mapWithIndex(items, (idx, item) =>
    <CarouselItem
      key=(idx |> string_of_int)
      keyVal=(idx |> string_of_int)
      onExiting=(() => send(OnExiting))
      onExited=(() => send(OnExited))
    >
      <img src=item.src alt=item.altText />
      <CarouselCaption
        captionText=item.caption
        captionHeader=item.caption
      />
    </CarouselItem>
  );

let component = ReasonReact.reducerComponent("BlueWhaleCarosel");

let updateStateWhenNotAnimating = (state, newState) =>
  state.animating ? state : newState;

let make = (~items, children) => {
  ...component,
  initialState: () => {
    activeIndex: 0,
    animating: false,
  },
  reducer: (action, state : state) => {
    let numItems = Belt.List.length(items);
    switch(action){
    | NoOp => ReasonReact.NoUpdate
    | Next =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex: ((state.activeIndex + 1) mod numItems)}))
    | Previous =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex: ((state.activeIndex + numItems - 1) mod numItems)}))
    | GoToIndex(activeIndex) =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex}))
    | OnExited => ReasonReact.Update({...state, animating: false})
    | OnExiting => ReasonReact.Update({...state, animating: true})
    }
  },
  render: (self) =>
    <div>
      <Carousel
        activeIndex=(self.state.activeIndex)
        next=(() => self.send(Next))
        previous=(() => self.send(Previous))
      >
        <CarouselIndicators
          items=(items |> Belt.List.map(_, caroselItemToJs))
          activeIndex=self.state.activeIndex
          onClickHandler=((index) => self.send(GoToIndex(index)))
        />
        (
          slides(items, self.send)
          |> Belt.List.toArray
          |> ReasonReact.arrayToElement
        )
        <CarouselControl
          direction="prev"
          directionText="Previous"
          onClickHandler=(() => self.send(Previous))
        />
        <CarouselControl
          direction="next"
          directionText="Next"
          onClickHandler=(() => self.send(Next))
        />
      </Carousel>
    </div>
};