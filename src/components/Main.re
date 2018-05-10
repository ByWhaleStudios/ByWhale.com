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
    ~fontSize="24px",
    ~color="blue",
    ~textJustify="none",
    ()
  );

let titleStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~fontSize="50px",
    ~fontWeight="500",
    ~whiteSpace="nowrap",
    ()
  );

let byWhaleTitleStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~fontSize="70px",
    ~fontWeight="700",
    ()
  );

let gridStyle =
  ReactDOMRe.Style.make(
    ~borderWidth="5px",
    ~padding="0 8%",
    ~margin="0",
    ~width="100%",
    ~height="100%",
    ~maxWidth="100%",
    ~borderRight="dashed 10px blue",
    ()
  );

let dashedTop =
  ReactDOMRe.Style.make(
    /*~alignSelf="flex-end",*/
    ~display="inline-block",
    ~overflow="auto",
    ~borderTop="dashed 10px blue",
    ~borderWidth="5px",
    ~alignSelf="flex-end",
    ~width="100%",
    ~height="100%",
    ()
  );

let byWhaleTop =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="stretch",
    ~margin="0",
    ~padding="0",
    ~borderLeft="dashed 10px blue",
    ~borderWidth="5px",
    ()
  );

let items : list(BlueWhaleCarosel.caroselItem) = [
  {
    src: "https://www.placecage.com/400/400",
    altText: "Slide 1",
    caption: "Slide 1"
  },
  {
    src: "https://www.placecage.com/400/400",
    altText: "Slide 2",
    caption: "Slide 2"
  },
  {
    src: "https://www.placecage.com/400/400",
    altText: "Slide 3",
    caption: "Slide 3"
  }
];

let appStyle =
  ReactDOMRe.Style.make(
    ~width="100%",
    ~height="100%",
    ~maxWidth="100%",
    ~paddingTop="0",
    ~paddingBottom="0",
    ~marginTop="0",
    ~marginBottom="0",
    ~borderWidth="5px",
    ~borderLeft="dashed 10px blue",
    ~borderBottom="dashed 10px blue",
    ()
  );

let flex =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="stretch",
    ()
  );

/* underscore before names indicate unused variables. We name them for clarity */
let make = (_children) => {
  ...component,
  render: _self =>
    <div>
      <div style=appStyle>
        <SectionDashedBorderTop title=Some("bywhale.") orientation=Orientation.Right top=true titleTextStyle=byWhaleTitleStyle/>
        <div style=gridStyle>
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
                <Col md=4>
                  <img src="https://www.placecage.com/300/400" style=imageStyle />
                </Col>
                <Col md=4>
                  <p style=contentStyle>
                    (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
                  </p>
                </Col>
                <Col md=4>
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
                <Col md=5>
                  <div>
                    <h1>(text("Illume Positive reminder app"))</h1>
                    <p style=contentStyle>
                      (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
                    </p>
                  </div>
                </Col>
                <Col md=7>
                  <BlueWhaleCarosel items=items/>
                </Col>
              </Row>
            </Grid>
          </SectionDashed>
          <SectionDashed>
            <Grid>
              <Row>
                <Col md=7>
                  <BlueWhaleCarosel items=items/>
                </Col>
                <Col md=5>
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
            title="4. Services"
          >
            <Grid style=contentStyle>
              <Row>
                <Col md=4>
                  <div>(text("Art Direction"))</div>
                  <div>(text("Branding"))</div>
                  <div>(text("Consultancy"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Design"))</div>
                </Col>
                <Col md=4>
                  <div>(text("Art Direction"))</div>
                  <div>(text("Branding"))</div>
                  <div>(text("Consultancy"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Design"))</div>
                </Col>
                <Col md=4>
                  <div>(text("Art Direction"))</div>
                  <div>(text("Branding"))</div>
                  <div>(text("Consultancy"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Concept Development"))</div>
                  <div>(text("Design"))</div>
                </Col>
              </Row>
            </Grid>
          </SectionDashed>
          <SectionDashed
            orientation=Orientation.Left
          >
            <Grid>
              <Row>
                <Col md=4>
                  <h1 style=titleStyle className="h1">
                    (text("5. About"))
                  </h1>
                  <p style=contentStyle>
                    (text("by whale.  is a design, coding, and product development studio based in New York City."))
                  </p>
                </Col>
                <Col md=4>
                  <h1 style=titleStyle className="h1">
                    (text("6. Address"))
                  </h1>
                  <p style=contentStyle>
                    (text("68 Jay Street"))
                    <br/>
                    (text("Suite 201"))
                    <br/>
                    (text("New York, NY 11201"))
                  </p>
                </Col>
                <Col md=4>
                  <h1 style=titleStyle className="h1">
                    (text("7. Follow"))
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
        </div>
      </div>
    </div>
};

