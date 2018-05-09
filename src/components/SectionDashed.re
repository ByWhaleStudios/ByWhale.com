let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashed");

let sectionStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="10px",
    ()
  );

let contentStyle =
  ReactDOMRe.Style.make(
    ~paddingTop="40px",
    ~paddingBottom="40px",
    ()
  );

let make = (~title=?, ~orientation=?, children) => {
  ...component,
  render: _self =>
    <div style=sectionStyle>
      <SectionDashedBorderTop orientation=Belt.Option.getWithDefault(orientation, Orientation.Left) title=title />
      (ReasonReact.createDomElement("div", ~props={"style": contentStyle}, children))

    </div>
};