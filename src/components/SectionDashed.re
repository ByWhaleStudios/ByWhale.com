let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashed");

let sectionStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="2em",
    ()
  );

let contentStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="1.5em",
    ()
  );

let make = (~title=?, ~orientation=?, ~theme, children) => {
  ...component,
  render: _self => {

    Js.log("theme = %j");
    Js.log(theme);
    <div style=sectionStyle>
      <div style=contentStyle>
        <SectionDashedBorderTop orientation=Belt.Option.getWithDefault(orientation, Orientation.Left) title=title theme=theme/>
      </div>
      (ReasonReact.createDomElement("div", ~props=Js.Obj.empty(), children))

    </div>;
  }
};