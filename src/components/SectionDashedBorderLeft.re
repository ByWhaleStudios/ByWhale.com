let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashedBorderLeft");

let dashedLineStyle =
  ReactDOMRe.Style.make(
    ~display="inline-block",
    ~borderLeft="dashed 10px blue",
    ~height="100%",
    ~width="100%",
    ~borderWidth="5px",
    ~overflow="auto",
    ()
  );

let make = (_children) => {
  ...component,
  render: _self =>
    <div style=dashedLineStyle />
};

