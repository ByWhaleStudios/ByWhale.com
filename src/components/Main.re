let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("Main");

[@bs.module] external ccc1 : string = "../../../../public/ClickCodeCreate1.png";
[@bs.module] external ccc2 : string = "../../../../public/ClickCodeCreate2.png";
[@bs.module] external ccc3 : string = "../../../../public/ClickCodeCreate3.png";

let contentStyle =
  ReactDOMRe.Style.make(
    ~textJustify="none",
    ()
  );

let dashWidth = 5;
let backgroundColor = "#fefcf5";

let titleStyle =
  ReactDOMRe.Style.make(
    ~whiteSpace="nowrap",
    ~marginBottom="rem",
    ()
  );

let byWhaleTitleStyle =
  ReactDOMRe.Style.make(
    ~fontWeight="700",
    ~fontFamily="Avenir Next",
    ~margin="0",
    ~padding="0",
    ~lineHeight=".75",
    ()
  );

let gridStyle =
  ReactDOMRe.Style.make(
    ~padding="0 8%",
    ~marginTop="4em",
    ~margin="0",
    ~width="100%",
    ~height="100%",
    ~maxWidth="100%",
    ()
  );

let appStyle =
  ReactDOMRe.Style.make(
    ~position="relative",
    ~width="100%",
    ~height="100%",
    ~maxWidth="100%",
    ~paddingTop="0",
    ~paddingBottom="0",
    ~marginTop="0",
    ~marginBottom="0",
    ~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",
    ~boxSizing="border-box",
    ()
  );

let flex =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="stretch",
    ()
  );

let flexCenter =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="center",
    ~justifyContent="center",
    ()
  );

let flexSpaceBetween =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~alignItems="center",
    ~justifyContent="flex-start",
    ()
  );
  
let fullWidthImageStyle =
  ReactDOMRe.Style.make(
    ~height="auto",
    ~width="100%",
    ~marginBottom="1em",
    ()
  );

let byWhaleBox =
  ReactDOMRe.Style.make(
    ~position="absolute",
    ~top="-" ++ (dashWidth |> string_of_int) ++ "px",
    ~right="-" ++ (dashWidth |> string_of_int) ++ "px",
    ~paddingLeft=".2em",
    ~paddingBottom=".2em",
    ~backgroundColor=backgroundColor,
    ()
  );

let envelopeStyle =
  ReactDOMRe.Style.make(
    ~marginBottom=".25em",
    ()
  );

let titleSpace =
  ReactDOMRe.Style.make(
    ~marginBottom="2.45em",
    ()
  );

let centeredContent =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~height="100%",
    ~width="100%",
    ~alignItems="center",
    ()
  );

let footerStyle =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~fontWeight="700",
    ~width="100%",
    ~marginBottom="2em",
    ~justifyContent="center",
    ()
  );

let items : list(BlueWhaleCarousel.caroselItem) = [
  {
    src: "http://www.placekitten.com/400/400",
    altText: "Slide 1",
    caption: "Slide 1"
  },
  {
    src: "http://www.placekitten.com/400/400",
    altText: "Slide 2",
    caption: "Slide 2"
  },
  {
    src: "http://www.placekitten.com/400/400",
    altText: "Slide 3",
    caption: "Slide 3"
  }
];

let clickCodeCreateCarouselItems : list(BlueWhaleCarousel.caroselItem) = [
  {
    src: ccc1,
    altText: "",
    caption: ""
  },
  {
    src: ccc2,
    altText: "",
    caption: ""
  },
  {
    src: ccc3,
    altText: "",
    caption: ""
  }
];

let make = (_children) => {
  ...component,
  render: _self =>
    <div>
      <div style=appStyle>
        <div style=byWhaleBox>
          <h1 className="h1" style=byWhaleTitleStyle>
            (text("bywhale."))
          </h1>
        </div>
        <div style=gridStyle>
          <SectionDashed orientation=Orientation.Left title="1.News">
            <p style=contentStyle>
              (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos."))
            </p>
          </SectionDashed>
          <SectionDashed orientation=Orientation.Right title="2.Team">
            <Row>
              <Col md=4>
                <img src="http://www.placekitten.com/300/400" style=fullWidthImageStyle />
                <div style=flexCenter>
                  <a className="a" href="mailto:greg@bywhale.com">
                    <FaEnvelope style=envelopeStyle/>
                    (text("   EMAIL GREG"))
                  </a>
                </div>
              </Col>
              <Col md=4>
                <p style=contentStyle>
                  (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris."))
                </p>
              </Col>
              <Col md=4>
                <img src="http://www.placekitten.com/300/400" style=fullWidthImageStyle />
                <div style=flexCenter>
                  <a className="a" href="mailto:lama@bywhale.com">
                    <FaEnvelope style=envelopeStyle/>
                    (text("   EMAIL LAMA"))
                  </a>
                </div>
              </Col>
            </Row>
          </SectionDashed>
          <SectionDashed orientation=Orientation.Left title="3.Work">
            <Row>
              <Col md=5>
                <div style=centeredContent>
                  <div>
                    <h3 className="h3">(text("Click Code Create"))</h3>
                    <br/>
                    <p style=contentStyle>
                      (text("Brochure design and identity for a 10 week online coding course that helps students learn the principles of web development and coding."))
                    </p>
                  </div>
                </div>
              </Col>
              <Col md=7>
                <BlueWhaleCarousel items=clickCodeCreateCarouselItems/>
              </Col>
            </Row>
          </SectionDashed>
          <SectionDashed>
            <Row>
              <Col md=7>
                <BlueWhaleCarousel items=items/>
              </Col>
              <Col md=5>
                <div style=centeredContent>
                  <div>
                    <h3 className="h3">(text("Illume Positive reminder app"))</h3>
                    <br/>
                    <p style=contentStyle>
                      (text("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris."))
                    </p>
                    <div style=flexSpaceBetween>
                      <DownloadButton buttonText="Download IOS" href="https://itunes.apple.com/us/app/illume/id1363415324?mt=8&app=itunes&ign-mpt=uo%3D4"/>
                      <DownloadButton buttonText="Download Android" href="https://play.google.com/store/apps/details?id=com.illume.illume"/>
                    </div>
                  </div>
                </div>
              </Col>
            </Row>
          </SectionDashed>
          <SectionDashed title="4.Services">
            <Row>
              <Col md=3>
                <div>(text("Art Direction"))</div>
                <div>(text("Branding"))</div>
                <div>(text("Consultancy"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Design"))</div>
              </Col>
              <Col md=3>
                <div>(text("Art Direction"))</div>
                <div>(text("Branding"))</div>
                <div>(text("Consultancy"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Design"))</div>
              </Col>
              <Col md=3>
                <div>(text("Art Direction"))</div>
                <div>(text("Branding"))</div>
                <div>(text("Consultancy"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Design"))</div>
              </Col>
              <Col md=3>
                <div>(text("Art Direction"))</div>
                <div>(text("Branding"))</div>
                <div>(text("Consultancy"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Concept Development"))</div>
                <div>(text("Design"))</div>
              </Col>
            </Row>
          </SectionDashed>
          <SectionDashed orientation=Orientation.Left>
            <Row>
              <Col md=3>
                <h2 style=titleStyle className="h2">
                  (text("5.About"))
                </h2>
                <p style=contentStyle>
                  (text("by whale.  is a design, coding, and product development studio based in New York City."))
                </p>
              </Col>
              <Col md=3>
                <h2 style=titleStyle className="h2">
                  (text("6.Address"))
                </h2>
                <p style=contentStyle>
                  (text("68 Jay Street"))
                  <br/>
                  (text("Suite 201"))
                  <br/>
                  (text("New York, NY 11201"))
                </p>
              </Col>
              <Col md=3>
                <h2 style=titleStyle className="h2">
                  (text("7.Follow"))
                </h2>
                <p style=contentStyle>
                  <a href="https://medium.com/@bywhale" className="a">
                    (text("Medium"))
                  </a>
                  <br/>
                  <a href="https://www.linkedin.com/company/bywhale/" className="a">
                    (text("Linkedn"))
                  </a>
                  <br/>
                  <a href="https://www.instagram.com/bywhale.nyc" className="a">
                    (text("Instagram"))
                  </a>
                </p>
              </Col>
              <Col md=3>
                <div style=titleSpace />
                <p style=contentStyle>
                  <br/>
                  <br/>
                  (text("back to top"))
                </p>
              </Col>
            </Row>
          </SectionDashed>
          <div style=footerStyle>
            <div>
              (text("All Copyright 2018"))
            </div>
          </div>
        </div>
      </div>
    </div>
};

