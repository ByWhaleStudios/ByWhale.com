[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, ~foundHash, ~server, _children) => {
  ...component,
  render: _self =>
    switch(server, foundHash){
    | (Some(true), _) => <div /> /* this is when it is not in server side render mode */
    | (_, Some("#beta-minimal")) => <Main key="min" theme=Theme.Minimal />
    | (_, Some(_)) => <Main key="main" theme=Theme.Retro />
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
