[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashedBorderTop");

let dashedLineStyle =
  ReactDOMRe.Style.make(
    ~display="inline-block",
    ~borderBottom="dashed 10px blue",
    ~height="100%",
    ~width="100%",
    ~borderWidth="5px",
    ~overflow="auto",
    ()
  );

let flex =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="stretch",
    ()
  );

let otherBox =
  ReactDOMRe.Style.make(
    ~alignSelf="flex-end",
    ~width="100%",
    ~height="100%",
    ()
  );

let wordStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~fontSize="40px",
    ~fontWeight="500",
    ()
  );

let make = (~title, _children) => {
  ...component,
  render: _self =>
    <Row>
      <Col xs=1 />
      <Col xs=10>
        <div style=flex>
          <div style=wordStyle>
            <p>
              (text(title))
            </p>
          </div>
          <div style=otherBox>
            <div style=dashedLineStyle />
          </div>
        </div>
      </Col>
      <Col xs=1 />
    </Row>
};

