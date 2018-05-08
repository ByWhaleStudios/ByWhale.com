[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("App");

let imageStyle =
  ReactDOMRe.Style.make(
    ~maxHeight="100%",
    ~maxWidth="100%",
    ()
  );

let dashedLineStyle =
  ReactDOMRe.Style.make(
    ~height="20",
    ()
  );

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~title, ~initialUrl, _children) => {
  ...component,
  render: _self =>
    <Grid className="App">
      <Row>
        <Col xs=8/>
        <Col xs=4>
          (text("bywhale."))
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=10>
          (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
        </Col>
        <Col xs=1/>
      </Row>
      <Row>
        <Col xs=12>
          <div style=dashedLineStyle />
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=3>
          <img src="https://www.placecage.com/300/400" style=imageStyle />
        </Col>
        <Col xs=4>
          (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
        </Col>
        <Col xs=3>
          <img src="https://www.placecage.com/300/400" style=imageStyle />
        </Col>
        <Col xs=1/>
      </Row>
      <Row>
        <Col xs=12>
          <div style=dashedLineStyle />
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=4>
          (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
        </Col>
        <Col xs=6>
          <img src="https://www.placecage.com/300/400" style=imageStyle />
        </Col>
        <Col xs=1/>
      </Row>
      <Row>
        <Col xs=12>
          <div style=dashedLineStyle />
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=6>
          <img src="https://www.placecage.com/300/400" style=imageStyle />
        </Col>
        <Col xs=4>
          (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
        </Col>
        <Col xs=1/>
      </Row>
      <Row>
        <Col xs=12>
          <div style=dashedLineStyle />
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=3>
          (text("about"))
        </Col>
        <Col xs=4>
          (text("address"))
        </Col>
        <Col xs=3>
          (text("follow"))
        </Col>
        <Col xs=1/>
      </Row>

    </Grid>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(
      ~title=jsProps##title,
      ~initialUrl=Js.undefinedToOption(jsProps##initialUrl),
      [||]
    )
  );
