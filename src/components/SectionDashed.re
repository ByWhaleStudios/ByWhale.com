let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashed");



let make = (~title=?, ~orientation, children) => {
  ...component,
  render: _self =>
    (
      orientation === Orientation.Left ?
        [
          <SectionDashedBorderTop title=title />,
          <Row>
            <Col xs=2 />
            <Col xs=8>
              ...children
            </Col>
            <Col xs=1>
              <SectionDashedBorderRight />
            </Col>
            <Col xs=1 />
          </Row>
        ] :
        [
          <SectionDashedBorderTop title=title />,
          <Row>
            <Col xs=1 />
            <Col xs=1>
              <SectionDashedBorderLeft />
            </Col>
            <Col xs=8>
              ...children
            </Col>
            <Col xs=2 />
          </Row>
        ]
    )
    |> Belt.List.toArray
    |> ReasonReact.arrayToElement
};

