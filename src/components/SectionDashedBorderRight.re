[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashedBorderRight");

let dashedLineStyle =
  ReactDOMRe.Style.make(
    ~display="inline-block",
    ~borderRight="dashed 10px blue",
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

