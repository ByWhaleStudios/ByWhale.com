[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

type action =
  | Tick;

type state = {
  tickCount: int
};

let component = ReasonReact.reducerComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, ~foundHash, ~server, _children) => {
  ...component,
  initialState: () => {tickCount: 0},
  reducer: (action, state) =>
    switch (action) {
    | Tick => ReasonReact.Update({tickCount: state.tickCount + 1})
    },
  didMount: (self) => {
    let intervalId = Js.Global.setInterval(() => self.send(Tick), 1000);
    self.onUnmount(() => Js.Global.clearInterval(intervalId));
  },
  render: self =>
    switch(server, foundHash){
    | (Some(true), _) => <div /> /* this is when it is not in server side render mode */
    | (_, Some("#beta-crazy")) =>
        Theme.allThemes
        |> Belt.List.get(_, (self.state.tickCount mod Belt.List.length(Theme.allThemes)))
        |> Belt.Option.getWithDefault(_, Theme.Retro)
        |> (theme) => <Main theme=theme />
    | (_, Some("#beta-minimal")) => <Main theme=Theme.Minimal />
    | (_, Some(_)) => <Main theme=Theme.Retro />
    | _ => <div />
    }
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(
      ~title=jsProps##title,
      ~initialUrl=Js.undefinedToOption(jsProps##initialUrl),
      ~foundHash=Js.undefinedToOption(jsProps##foundHash),
      ~server=Js.undefinedToOption(jsProps##server),
      [||]
    )
  );
