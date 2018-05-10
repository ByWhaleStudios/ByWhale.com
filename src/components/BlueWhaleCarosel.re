let text = ReasonReact.stringToElement;

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
  Belt.List.mapWithIndex(items, (idx, item) => {
    Js.log("idx = %j");
    Js.log(idx);
    <CarouselItem
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
  });

let component = ReasonReact.reducerComponent("BlueWhaleCarosel");

let updateStateWhenNotAnimating = (state, newState) =>
  state.animating ? state : newState;

let make = (~items, children) => {
  ...component,
  initialState: () => {
    activeIndex: 0,
    animating: false,
  },
  reducer: (action, state : state) =>
    switch(action){
    | NoOp => ReasonReact.NoUpdate
    | Next =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex: ((state.activeIndex + 1) mod Belt.List.length(items))}))
    | Previous =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex: ((state.activeIndex - 1) mod Belt.List.length(items))}))
    | GoToIndex(activeIndex) =>
        ReasonReact.Update(updateStateWhenNotAnimating(state, {...state, activeIndex}))
    | OnExited => ReasonReact.Update({...state, animating: false})
    | OnExiting => ReasonReact.Update({...state, animating: true})
    },
  render: (self) =>
    <div>
      <Carousel
        activeIndex=(self.state.activeIndex)
        next=(() => self.send(Next))
        previous=(() => self.send(Previous))
      >
        <CarouselIndicators
          items=(items)
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