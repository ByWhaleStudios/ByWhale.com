[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

type action =
  | Tick
  | ChangeTheme(Theme.theme);

type state = {
  tickCount: int,
  theme: Theme.theme
};

let component = ReasonReact.reducerComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, ~foundHash, ~server, _children) => {
  ...component,
  initialState: () => {
    tickCount: 0,
    theme: Theme.AtariBlue
  },
  reducer: (action, state) =>
    switch (action) {
    | Tick => ReasonReact.Update({...state, tickCount: state.tickCount + 1})
    | ChangeTheme(theme) => ReasonReact.Update({...state, theme: theme})
    },
  didMount: (self) => {
    let intervalId = Js.Global.setInterval(() => self.send(Tick), 1000);
    self.onUnmount(() => Js.Global.clearInterval(intervalId));
  },
  render: self => {
    let changeTheme = (theme) => self.send(ChangeTheme(theme));
    switch(server, foundHash){
    | (Some(true), _) => <div /> /* this is when it is not in server side render mode */
    | (_, Some("#beta-crazy")) =>
        Theme.allThemes
        |> Belt.List.get(_, (self.state.tickCount mod Belt.List.length(Theme.allThemes)))
        |> Belt.Option.getWithDefault(_, Theme.AtariBlue)
        |> (theme) => <Main theme=theme changeTheme=changeTheme />
    | (_, Some("#beta-minimal")) => <Main theme=Theme.Minimal changeTheme=changeTheme />
    | (_, Some("#beta-atari-black")) => <Main theme=Theme.AtariBlack changeTheme=changeTheme />
    | (_, Some(_)) => <Main theme=self.state.theme changeTheme=changeTheme />
    | _ => <div />
    };
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
