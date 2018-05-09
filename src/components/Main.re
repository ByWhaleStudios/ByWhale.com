let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("Main");

let imageStyle =
  ReactDOMRe.Style.make(
    ~maxHeight="100%",
    ~maxWidth="100%",
    ()
  );

let contentStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~textJustify="none",
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

let gridStyle =
  ReactDOMRe.Style.make(
    ~border="dashed 10px blue",
    ~borderWidth="5px",
    ()
  );

/* underscore before names indicate unused variables. We name them for clarity */
let make = (_children) => {
  ...component,
  render: _self =>
    <Grid style=gridStyle>
      <Row>
        <Col xs=10/>
        <Col xs=2>
          <div style=byWhaleTextStyle>
            (text("bywhale."))
          </div>
        </Col>
      </Row>
      <Row>
        <Col xs=1/>
        <Col xs=10>
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
                <Col xs=5>
                  <div>
                    <h1>(text("Illume Positive reminder app"))</h1>
                    <p style=contentStyle>
                      (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
                    </p>
                  </div>
                </Col>
                <Col xs=7>
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
                <Col xs=7>
                  <img src="https://www.placecage.com/300/400" style=imageStyle />
                </Col>
                <Col xs=5>
                  <div>
                    <h1>(text("Illume Positive reminder app"))</h1>
                    <p style=contentStyle>
                      (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
                    </p>
                  </div>
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
                  <h1 style=titleStyle>
                    (text("4. About"))
                  </h1>
                  <p style=contentStyle>
                    (text("by whale.  is a design, coding, and product development studio based in New York City."))
                  </p>
                </Col>
                <Col xs=4>
                  <h1 style=titleStyle>
                    (text("5. Address"))
                  </h1>
                  <p style=contentStyle>
                    (text("68 Jay Street"))
                    <br/>
                    (text("Suite 201"))
                    <br/>
                    (text("New York, NY 11201"))
                  </p>
                </Col>
                <Col xs=4>
                  <h1 style=titleStyle>
                    (text("6. Follow"))
                  </h1>
                  <p style=contentStyle>
                    (text("Medium"))
                    <br/>
                    (text("Linkedn"))
                    <br/>
                    (text("Instagram"))
                    <br/>
                    (text("Twitter"))
                  </p>
                </Col>
              </Row>
            </Grid>
          </SectionDashed>
        </Col>
        <Col xs=1 />
      </Row>
    </Grid>
};

