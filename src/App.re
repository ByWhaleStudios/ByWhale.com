[%bs.raw {|require('bootstrap/dist/css/bootstrap.css')|}];
let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("App");

let imageStyle =
  ReactDOMRe.Style.make(
    ~maxHeight="100%",
    ~maxWidth="100%",
    ()
  );

let contentStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ()
  );

let titleStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~fontSize="40px",
    ~fontWeight="500",
    ~whiteSpace="nowrap",
    ()
  );

let byWhaleTextStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~fontSize="40px",
    ~fontWeight="700",
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
          <div style=byWhaleTextStyle>
            (text("bywhale."))
          </div>
        </Col>
      </Row>
      <SectionDashed
        orientation=Orientation.Left
        title="1. News"
      >
        <p style=contentStyle>
          (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
        </p>
      </SectionDashed>
      <SectionDashed
        orientation=Orientation.Right
        title="2. Team"
      >
        <Grid>
          <Row>
            <Col xs=4>
              <img src="https://www.placecage.com/300/400" style=imageStyle />
            </Col>
            <Col xs=4>
              <p style=contentStyle>
                (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
              </p>
            </Col>
            <Col xs=4>
              <img src="https://www.placecage.com/300/400" style=imageStyle />
            </Col>
          </Row>
        </Grid>
      </SectionDashed>
      <SectionDashed
        orientation=Orientation.Left
        title="3. Work"
      >
        <Grid>
          <Row>
            <Col xs=6>
              <p style=contentStyle>
                (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
              </p>
            </Col>
            <Col xs=6>
              <img src="https://www.placecage.com/300/400" style=imageStyle />
            </Col>
          </Row>
        </Grid>
      </SectionDashed>
      <SectionDashed
        orientation=Orientation.Right
      >
        <Grid>
          <Row>
            <Col xs=6>
              <img src="https://www.placecage.com/300/400" style=imageStyle />
            </Col>
            <Col xs=6>
              <p style=contentStyle>
                (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
              </p>
            </Col>
          </Row>
        </Grid>
      </SectionDashed>
      <SectionDashed
        orientation=Orientation.Left
      >
        <Grid>
          <Row>
            <Col xs=4>
              <p style=titleStyle>
                (text("4. About"))
              </p>
              <p style=contentStyle>
                (text("by whale.  is a design, coding, and product development studio based in New York City."))
              </p>
            </Col>
            <Col xs=4>
              <p style=titleStyle>
                (text("5. Address"))
              </p>
              <p style=contentStyle>
                (text("68 Jay Street Suite 201 New York, NY 11201"))
              </p>
            </Col>
            <Col xs=4>
              <p style=titleStyle>
                (text("6. Follow"))
              </p>
              <p style=contentStyle>
                (text("Medium Linkedn Instagram Twitter"))
              </p>
            </Col>
          </Row>
        </Grid>
      </SectionDashed>
      <SectionDashed orientation=Orientation.Right />
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
