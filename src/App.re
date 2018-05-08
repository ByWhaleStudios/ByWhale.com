let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      (text("Hi Lama"))
    </div>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(
      ~title=jsProps##title,
      ~initialUrl=Js.undefinedToOption(jsProps##initialUrl),
      [||]
    )
  );
