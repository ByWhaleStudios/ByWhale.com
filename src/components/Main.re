let text = ReasonReact.stringToElement;


[@bs.module] external ccc1 : string = "../../../../public/ClickCodeCreate1.png";
[@bs.module] external ccc2 : string = "../../../../public/ClickCodeCreate2.png";
[@bs.module] external ccc3 : string = "../../../../public/ClickCodeCreate3.png";
[@bs.module] external lamaAndGregGif : string = "../../../../public/LamaAndGreg.gif";
[@bs.module] external lamaAndGregBlackGif : string = "../../../../public/LamaAndGregBlack.gif";
[@bs.module] external illumeImage : string = "../../../../public/illumeImage.png";
[@bs.module] external byWhaleIdentityImage : string = "../../../../public/byWhaleIdentityImage.png";

type action =
  | ChangeTheme(Theme.theme)
;

type state = {
  theme: Theme.theme
};

let contentStyle =
  ReactDOMRe.Style.make(
    ~textJustify="none",
    ()
  );

let linkTheme =
  ReactDOMRe.Style.make(
    ~color="blue",
    ()
  );

let dashWidth = 3;

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
    ~lineHeight=".9",
    ()
  );

let gridStyle =
  ReactDOMRe.Style.make(
    ~padding="0 8%",
    ~paddingTop="4em",
    ~margin="0",
    ~width="100%",
    ~height="100%",
    ~maxWidth="100%",
    ()
  );


let appStyle = (theme : Theme.theme) =>
  switch(theme){
  | Theme.Minimal =>
      ReactDOMRe.Style.make(
        ~position="relative",
        ~width="100%",
        ~height="100%",
        ~maxWidth="100%",
        ~paddingTop="0",
        ~paddingBottom="0",
        ~marginTop="0",
        ~marginBottom="0",
        ~boxSizing="border-box",
        ~fontFamily="Trebuchet MS, Helvetica, sans-serif",
        ()
      );
  | Theme.AtariBlue =>
      ReactDOMRe.Style.make(
        ~position="relative",
        ~width="100%",
        ~height="100%",
        ~maxWidth="100%",
        /*~padding=(dashWidth |> string_of_int),*/
        ~paddingTop="0",
        ~paddingBottom="0",
        ~marginTop="0",
        ~marginBottom="0",

        /*~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",*/
        ~border="dashed 1px transparent",

        ~backgroundImage="repeating-linear-gradient(to right, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to right, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 75%, transparent 75%, transparent 100%)",
        ~backgroundPosition="left top, left bottom, left top, right top",
        ~backgroundRepeat="repeat-x, repeat-x, repeat-y, repeat-y",
        ~backgroundSize="20px 3px, 20px 3px, 3px 20px, 3px 20px",

        ~boxSizing="border-box",
        ~color="blue",
        ~fontFamily="Andale Mono, AndaleMono, monospace",
        ()
      );
  | Theme.AtariBlack =>
      ReactDOMRe.Style.make(
        ~position="relative",
        ~width="100%",
        ~height="100%",
        ~maxWidth="100%",
        /*~padding=(dashWidth |> string_of_int),*/
        ~paddingTop="0",
        ~paddingBottom="0",
        ~marginTop="0",
        ~marginBottom="0",

        /*~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",*/
        ~border="dashed 1px transparent",

        ~backgroundImage="repeating-linear-gradient(to right, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to right, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, white 0%, white 75%, transparent 75%, transparent 100%)",
        ~backgroundPosition="left top, left bottom, left top, right top",
        ~backgroundRepeat="repeat-x, repeat-x, repeat-y, repeat-y",
        ~backgroundSize="20px 3px, 20px 3px, 3px 20px, 3px 20px",

        ~boxSizing="border-box",
        ~color="white",
        ~fontFamily="Andale Mono, AndaleMono, monospace",
        ()
      );
  };
  

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

let styleDownloadButton =
  ReactDOMRe.Style.make(
    ~marginBottom=".5em",
    ()
  );

let emailSpaceAround =
  ReactDOMRe.Style.make(
    ~textAlign="center",
    ~margin="0 6%",
    ~width="100%",
    ~display="flex",
    ~alignItems="center",
    ~justifyContent="space-around",
    ()
  );
  
let fullWidthImageStyle =
  ReactDOMRe.Style.make(
    ~height="auto",
    ~width="100%",
    ~marginBottom=".5em",
    ()
  );

let byWhaleBox = (theme) =>
  switch(theme){
  | Theme.Minimal =>
      ReactDOMRe.Style.make(
        ~position="absolute",
        ~color="blue",
        ~top="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~right="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~paddingLeft=".2em",
        ()
      )
  | Theme.AtariBlue =>
      ReactDOMRe.Style.make(
        ~position="absolute",
        ~color="blue",
        ~paddingTop=".12em",
        ~top="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~right="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~paddingLeft=".2em",
        ~backgroundColor="#fefcf5",
        ()
      )
  | Theme.AtariBlack =>
      ReactDOMRe.Style.make(
        ~position="absolute",
        ~color="white",
        ~paddingTop=".12em",
        ~top="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~right="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~paddingLeft=".2em",
        ~backgroundColor="black",
        ()
      )
  };

let envelopeStyle =
  ReactDOMRe.Style.make(
    ~marginBottom=".28em",
    ()
  );

let flexHorizontalEnd =
  ReactDOMRe.Style.make(
    ~height="100%",
    ~width="100%",
    ~display="flex",
    ~justifyContent="flex-end",
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

let footerCopyrightStyle =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~width="100%",
    ~justifyContent="center",
    ()
  );

let footerStyle =
  ReactDOMRe.Style.make(
    ~fontWeight="700",
    ~marginBottom=".8em",
    ()
  );

let lastSectionStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="5em",
    ()
  );

let rootStyle = (theme) =>
  switch(theme){
  | Theme.Minimal =>
      ReactDOMRe.Style.make(
        ~padding="1em",
        ~height="100%",
        ~width="100%",
        ()
      )
  | Theme.AtariBlue =>
      ReactDOMRe.Style.make(
        ~padding="1em",
        ~height="100%",
        ~width="100%",
        ~backgroundColor="#fefcf5",
        ()
      )
  | Theme.AtariBlack =>
      ReactDOMRe.Style.make(
        ~padding="1em",
        ~height="100%",
        ~width="100%",
        ~backgroundColor="black",
        ()
      )
};

let jobTitleStyle =
  ReactDOMRe.Style.make(
    ~fontSize=".8em",
    ()
  );

let emailMeStyle =
  ReactDOMRe.Style.make(
    ~fontSize=".6em",
    ()
  );

let module Document = {
  [@bs.val] [@bs.scope ("window")] external scrollTo : (int, int) => unit = "scrollTo";
};


let scrollToTop = () =>
  Document.scrollTo(0, 0);

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

let component = ReasonReact.statelessComponent("Main");

let make = (~theme, ~changeTheme, _children) => {
  ...component,
  render: self => {
    let contentBlock = Content.contentBlockFn(theme);
    <div>
      <div style=rootStyle(theme)>
        <div style=appStyle(theme)>
            <select
              onChange=(
                (event) =>
                  event
                  |> ReactEventRe.Form.target
                  |> ReactDOMRe.domElementToObj
                  |> (obj) => obj##value
                  |> Theme.stringToTheme
                  |> (theme) => changeTheme(theme)
              )
            >
              (
                /*Theme.allThemes*/
                [Theme.AtariBlue, Theme.AtariBlack]
                |> Belt.List.map(_, (theme) => <option value=Theme.themeToString(theme)>(text(Theme.themeToString(theme)))</option>)
                |> Belt.List.toArray
                |> ReasonReact.arrayToElement
              )
            </select>
          
          <div style=byWhaleBox(theme)>
            <h1 className="h1" style=byWhaleTitleStyle>
              (text("bywhale."))
            </h1>
          </div>
          <div style=gridStyle>
            <SectionDashed orientation=Orientation.Left theme=theme title=(contentBlock.about.title)>
              <p style=contentStyle>
                (
                  contentBlock.about.content
                  |> Utils.List.getFromStringListList(_, 0, 0)
                  |> text
                )
              </p>
            </SectionDashed>
            <SectionDashed orientation=Orientation.Right theme=theme title=(contentBlock.team.title)>
              <Row>
                <Col md=12>
                  (
                    switch(theme){
                    | Theme.AtariBlack => <img src=lamaAndGregBlackGif style=fullWidthImageStyle/>
                    | (Theme.AtariBlue | Theme.Minimal) => <img src=lamaAndGregGif style=fullWidthImageStyle/>
                    }
                  )
                </Col>
              </Row>
              <Row>
                <div style=emailSpaceAround>
                  <div style=flexCenter>
                    <div style=jobTitleStyle>
                      (text("Lama Younes"))
                      <br/>
                      (text("Graphic Designer, Co-Founder"))
                      <br/>
                      <A theme=theme style=emailMeStyle className="a" href="mailto:greg@bywhale.com">
                        <FaEnvelope style=envelopeStyle/>
                        (text("   email lama"))
                      </A>
                    </div>
                  </div>
                  <div style=flexCenter>
                    <div style=jobTitleStyle>
                      (text("Gregory Thompson"))
                      <br/>
                      (text("Software Developer, Co-Founder"))
                      <br/>
                      <A theme=theme style=emailMeStyle className="a" href="mailto:lama@bywhale.com">
                        <FaEnvelope style=envelopeStyle/>
                        (text("   email greg"))
                      </A>
                    </div>
                  </div>
                </div>
              </Row>
            </SectionDashed>
            <SectionDashed orientation=Orientation.Left theme=theme title=(contentBlock.work.title)>
              <Row>
                <Col md=5>
                  <div style=centeredContent>
                    <div>
                      <h3 className="h3">
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 0, 0)
                          |> text
                        )
                      </h3>
                      <br/>
                      <p style=contentStyle>
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 0, 1)
                          |> text
                        )
                      </p>
                      <div style=styleDownloadButton>
                        <DownloadButton buttonText="Download IOS" href="https://itunes.apple.com/us/app/illume/id1363415324?mt=8&app=itunes&ign-mpt=uo%3D4"/>
                      </div>
                      <div style=styleDownloadButton>
                        <DownloadButton buttonText="Download Android" href="https://play.google.com/store/apps/details?id=com.illume.illume"/>
                      </div>
                    </div>
                  </div>
                </Col>
                <Col md=7>
                  <img src=illumeImage style=fullWidthImageStyle />
                </Col>
              </Row>
              <Row>
                <Col md=7>
                  <BlueWhaleCarousel items=clickCodeCreateCarouselItems/>
                </Col>
                <Col md=5>
                  <div style=centeredContent>
                    <div>
                      <h3 className="h3">
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 1, 0)
                          |> text
                        )
                      </h3>
                      <br/>
                      <p style=contentStyle>
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 1, 1)
                          |> text
                        )
                      </p>
                    </div>
                  </div>
                </Col>
              </Row>
              <Row>
                <Col md=5>
                  <div style=centeredContent>
                    <div>
                      <h3 className="h3">
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 2, 0)
                          |> text
                        )
                      </h3>
                      <br/>
                      <p style=contentStyle>
                        (
                          contentBlock.work.content
                          |> Utils.List.getFromStringListList(_, 2, 1)
                          |> text
                        )
                      </p>
                    </div>
                  </div>
                </Col>
                <Col md=7>
                  <img src=byWhaleIdentityImage style=fullWidthImageStyle />
                </Col>
              </Row>
            </SectionDashed>
            <SectionDashed title=(contentBlock.services.title) theme=theme>
              <Row>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 0)
                    |> Belt.Option.getWithDefault(_, [])
                    |> Utils.ReasonReact.concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 1)
                    |> Belt.Option.getWithDefault(_, [])
                    |> Utils.ReasonReact.concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 2)
                    |> Belt.Option.getWithDefault(_, [])
                    |> Utils.ReasonReact.concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 3)
                    |> Belt.Option.getWithDefault(_, [])
                    |> Utils.ReasonReact.concatStringWithBr
                  )
                </Col>
              </Row>
            </SectionDashed>
            <SectionDashed orientation=Orientation.Left theme=theme>
              <Row style=lastSectionStyle>
                <Col md=6>
                  <h2 style=titleStyle className="h2">
                    (text(contentBlock.news.title))
                  </h2>
                  <p style=contentStyle>
                    (
                      contentBlock.news.content
                      |> Utils.List.getFromStringListList(_, 0, 0)
                      |> text
                    )
                  </p>
                </Col>
                <Col md=3>
                  <h2 style=titleStyle className="h2">
                    (text(contentBlock.address.title))
                  </h2>
                  <p style=contentStyle>
                    (
                      contentBlock.address.content
                      |> Belt.List.head
                      |> Belt.Option.getWithDefault(_, [])
                      |> Utils.ReasonReact.concatStringWithBr
                    )
                  </p>
                </Col>
                <Col md=3>
                  <h2 style=titleStyle className="h2">
                    (text(contentBlock.follow.title))
                  </h2>
                  <p style=contentStyle>
                    (
                      contentBlock.follow.content
                      |> Belt.List.head
                      |> Belt.Option.getWithDefault(_, [])
                      |> Utils.ReasonReact.concatLinkWithBr(_, theme, Content.textSocialMediaToHref)
                    )
                  </p>
                </Col>
              </Row>
            </SectionDashed>
            <Row style=footerStyle>
              <Col md=3 />
              <Col md=6>
                <div style=footerCopyrightStyle>
                  (text("All Copyright 2018"))
                </div>
              </Col>
              <Col md=3>
                <div style=flexHorizontalEnd>
                  <A className="a" theme=theme onClick=((_) => scrollToTop()) href="javascript:void(0)">
                    (text("back to top"))
                  </A>
                </div>
              </Col>
            </Row>
          </div>
        </div>
      </div>
    </div>
  }
};

