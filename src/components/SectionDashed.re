let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashed");

let contentStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="10px",
    ()
  );

let make = (~title=?, ~orientation=?, children) => {
  ...component,
  render: _self =>
    <div>
      <SectionDashedBorderTop orientation=orientation title=title />
      (ReasonReact.createDomElement("div", ~props={"style": contentStyle}, children))
    </div>
};