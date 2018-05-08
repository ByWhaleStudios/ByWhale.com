[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, ~foundHash, _children) => {
  ...component,
  render: _self =>
    switch(foundHash){
    | Some("#beta") => <Main />
    | _ =>
        <div>
          (text("were cooking our website. we’ll be up and running shortly"))
        </div>
    }
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(
      ~title=jsProps##title,
      ~initialUrl=Js.undefinedToOption(jsProps##initialUrl),
      ~foundHash=Js.undefinedToOption(jsProps##foundHash),
      [||]
    )
  );
