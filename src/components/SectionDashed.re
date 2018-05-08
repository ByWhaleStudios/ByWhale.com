[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashed");

let make = (~title, ~content, _children) => {
  ...component,
  render: _self =>
    [
      <SectionDashedBorderTop title=title />,
      <Row>
        <Col xs=1 />
        <Col xs=1 />
        <Col xs=8>
          <p>
            (text(content))
          </p>
        </Col>
        <Col xs=1>
          <SectionDashedBorderRight />
        </Col>
        <Col xs=1 />
      </Row>
    ]
    |> Belt.List.toArray
    |> ReasonReact.arrayToElement
};

