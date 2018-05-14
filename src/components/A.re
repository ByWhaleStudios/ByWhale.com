let component = ReasonReact.statelessComponent("A");

let linkBaseStyle = (theme) =>
  switch(theme){
  | Theme.AtariBlue => ReactDOMRe.Style.make(~color="blue", ())
  | Theme.AtariBlack => ReactDOMRe.Style.make(~color="white", ())
  | _ => ReactDOMRe.Style.make(())
  };
  

let linkStyle = (theme : Theme.theme, style) =>
  switch(style){
  | None => theme |> linkBaseStyle
  | Some(style) => (theme |> linkBaseStyle |>  ReactDOMRe.Style.combine(_, style))
  };

let make = (~href, ~onClick=?, ~className=?, ~style=?, ~theme, children) => {
  ...component,
  render: _self =>
    <a
      className=(Belt.Option.getWithDefault(className, ""))
      onClick=(Belt.Option.getWithDefault(onClick, (_) => ()))
      style=linkStyle(theme, style)
      href=href
    >
      (ReasonReact.createDomElement("span", ~props=Js.Obj.empty(), children))
    </a>
};