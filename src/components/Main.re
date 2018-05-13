let text = ReasonReact.stringToElement;


[@bs.module] external ccc1 : string = "../../../../public/ClickCodeCreate1.png";
[@bs.module] external ccc2 : string = "../../../../public/ClickCodeCreate2.png";
[@bs.module] external ccc3 : string = "../../../../public/ClickCodeCreate3.png";



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

let dashWidth = 5;

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
    ~marginTop="4em",
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
  | Theme.Retro =>
      ReactDOMRe.Style.make(
        ~position="relative",
        ~width="100%",
        ~height="100%",
        ~maxWidth="100%",
        /*~padding=(dashWidth |> string_of_int),*/
        ~marginTop="0",
        ~marginBottom="0",

        /*~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",*/
        ~border="dashed 1px transparent",

        ~backgroundImage="repeating-linear-gradient(to right, blue 0%, blue 50%, transparent 50%, transparent 100%), repeating-linear-gradient(to right, blue 0%, blue 50%, transparent 50%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 50%, transparent 50%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 50%, transparent 50%, transparent 100%)",
        ~backgroundPosition="left top, left bottom, left top, right top",
        ~backgroundRepeat="repeat-x, repeat-x, repeat-y, repeat-y",
        ~backgroundSize="15px 5px, 15px 5px, 5px 15px, 5px 15px",

        ~boxSizing="border-box",
        ~color="blue",
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
  | Theme.Retro =>
      ReactDOMRe.Style.make(
        ~position="absolute",
        ~color="blue",
        ~top="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~right="-" ++ ((dashWidth + 1) |> string_of_int) ++ "px",
        ~paddingLeft=".2em",
        ~backgroundColor="#fefcf5",
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
        ()
      )
  | Theme.Retro =>
      ReactDOMRe.Style.make(
        ~padding="1em",
        ~backgroundColor="#fefcf5",
        ()
      )
};

let module Document = {
  [@bs.val] [@bs.scope ("window")] external scrollTo : (int, int) => unit = "scrollTo";
};


let scrollToTop = () =>
  Document.scrollTo(0, 0);


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

let listToReactArray = (list) =>
  list
  |> Belt.List.toArray
  |> ReasonReact.arrayToElement;

let concatStringWithBr = (listString) =>
  listString
  |> Belt.List.reduce(_, [], (memo, ele) =>
       memo @ (Belt.List.length(memo) === 0 ? [] : [<br/>]) @
       [<span>(text(ele))</span>])
  |> listToReactArray;

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

let component = ReasonReact.reducerComponent("Main");

type contentType = {
  title: string,
  content: list(list(string)),
};

type contentBlock = {
  news: contentType,
  team:contentType,
  work: contentType,
  services:contentType,
  about: contentType,
  address: contentType,
  follow: contentType,
};

let contentBlockFn = (theme) => {
  news: {
    title: theme === Theme.Retro ? "1.News" : "News",
    content: [
      [
        "bywhale. has a new home! We are now up and running in Dumbo. find us at 68 Jay Street, Brooklyn, NY, 11201. We are also happy to announce that we have partnered up with Real & Open and are working on an exciting technology product for educators. Stay tuned!"
      ],
    ],
  },
  team: {
    title: theme === Theme.Retro ? "2.Team" : "Team",
    content: [
      [
        "Lama: Greg I need a little change.",
        "Greg: Ughhh sure. Whats up?",
        "Lama: Make the logo 5 points bigger.",
        "Greg: Wait what? I don't understand.",
        "Lama: What don't you understand.",
        "Greg: What the hell is a point?"
      ],
    ]
  },
  work: {
    title: theme === Theme.Retro ? "3.Work" : "Work",
    content: [
      [
        "Click Code Create",
        "Brochure design and identity for a 10 week online coding course that helps students learn the principles of web development and coding.",
      ],
      [
        "Illume Positive reminder app",
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris.",
      ]
    ]
  },
  services: {
    title: theme === Theme.Retro ? "4.Services" : "Services",
    content: [
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
    ]
  },
  about: {
    title: theme === Theme.Retro ? "5.About" : "About",
    content: [
      ["bywhale. is a creative and technology studio based in New York City."]
    ]
  },
  address: {
    title: theme === Theme.Retro ? "6.Address" : "Address",
    content: [
      [
        "68 Jay Street",
        "Suite 201",
        "New York, NY 11201",
      ]
    ]
  },
  follow: {
    title: theme === Theme.Retro ? "7.Follow" : "Follow",
    content: [
      [
        "Medium",
        "Linkedin",
        "Instagram",
        "Github",
      ]
    ]
  }
};

let make = (~theme, _children) => {
  ...component,
  initialState: () => { theme: theme },
  reducer: (action, state: state) =>
    switch action {
    | ChangeTheme(theme) => ReasonReact.Update({ ...state,  theme })
    },
  render: self => {
    let contentBlock = contentBlockFn(self.state.theme);
    <div>
      <div style=rootStyle(self.state.theme)>
        <div style=appStyle(self.state.theme)>
          /*
            <select
              onChange=(
                (event) =>
                  event
                  |> ReactEventRe.Form.target
                  |> ReactDOMRe.domElementToObj
                  |> (obj) => obj##value
                  |> Theme.stringToTheme
                  |> (theme) => ChangeTheme(theme)
                  |> self.send
              )
            >
              (
                Theme.allThemes
                |> Belt.List.map(_, (theme) => <option value=Theme.themeToString(theme)>(text(Theme.themeToString(theme)))</option>)
                |> Belt.List.toArray
                |> ReasonReact.arrayToElement
              )
            </select>
          */
          <div style=byWhaleBox(self.state.theme)>
            <h1 className="h1" style=byWhaleTitleStyle>
              (text("bywhale."))
            </h1>
          </div>
          <div style=gridStyle>
            <SectionDashed orientation=Orientation.Left theme=self.state.theme title=(contentBlock.news.title)>
              <p style=contentStyle>
                (
                  contentBlock.news.content
                  |> Belt.List.head
                  |> Belt.Option.getWithDefault(_, [])
                  |> Belt.List.head
                  |> Belt.Option.getWithDefault(_, "")
                  |> text
                )
              </p>
            </SectionDashed>
            <SectionDashed orientation=Orientation.Right theme=self.state.theme title=(contentBlock.team.title)>
              <Row>
                <Col md=3>
                  <img src="http://www.placekitten.com/300/400" style=fullWidthImageStyle />
                  <div style=flexCenter>
                    <a className="a" href="mailto:greg@bywhale.com">
                      <FaEnvelope style=envelopeStyle/>
                      (text("   EMAIL GREG"))
                    </a>
                  </div>
                </Col>
                <Col md=6>
                  <div style=flexCenter>
                    <p style=contentStyle>
                      (
                        contentBlock.team.content
                        |> Belt.List.head
                        |> Belt.Option.getWithDefault(_, [])
                        |> concatStringWithBr
                      )
                    </p>
                  </div>
                </Col>
                <Col md=3>
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
            <SectionDashed orientation=Orientation.Left theme=self.state.theme title=(contentBlock.work.title)>
              <Row>
                <Col md=5>
                  <div style=centeredContent>
                    <div>
                      <h3 className="h3">
                        (
                          contentBlock.work.content
                          |> Belt.List.get(_, 0)
                          |> Belt.Option.getWithDefault(_, [])
                          |> Belt.List.get(_, 0)
                          |> Belt.Option.getWithDefault(_, "")
                          |> text
                        )
                      </h3>
                      <br/>
                      <p style=contentStyle>
                        (
                          contentBlock.work.content
                          |> Belt.List.get(_, 0)
                          |> Belt.Option.getWithDefault(_, [])
                          |> Belt.List.get(_, 1)
                          |> Belt.Option.getWithDefault(_, "")
                          |> text
                        )
                      </p>
                    </div>
                  </div>
                </Col>
                <Col md=7>
                  <BlueWhaleCarousel items=clickCodeCreateCarouselItems/>
                </Col>
              </Row>
            </SectionDashed>
            <SectionDashed theme=self.state.theme>
              <Row>
                <Col md=7>
                  <BlueWhaleCarousel items=items/>
                </Col>
                <Col md=5>
                  <div style=centeredContent>
                    <div>
                      <h3 className="h3">
                        (
                          contentBlock.work.content
                          |> Belt.List.get(_, 1)
                          |> Belt.Option.getWithDefault(_, [])
                          |> Belt.List.get(_, 0)
                          |> Belt.Option.getWithDefault(_, "")
                          |> text
                        )
                      </h3>
                      <br/>
                      <p style=contentStyle>
                        (
                          contentBlock.work.content
                          |> Belt.List.get(_, 1)
                          |> Belt.Option.getWithDefault(_, [])
                          |> Belt.List.get(_, 1)
                          |> Belt.Option.getWithDefault(_, "")
                          |> text
                        )
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
            <SectionDashed title=(contentBlock.services.title) theme=self.state.theme>
              <Row>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 0)
                    |> Belt.Option.getWithDefault(_, [])
                    |> concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 1)
                    |> Belt.Option.getWithDefault(_, [])
                    |> concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 2)
                    |> Belt.Option.getWithDefault(_, [])
                    |> concatStringWithBr
                  )
                </Col>
                <Col md=3>
                  (
                    contentBlock.services.content
                    |> Belt.List.get(_, 3)
                    |> Belt.Option.getWithDefault(_, [])
                    |> concatStringWithBr
                  )
                </Col>
              </Row>
            </SectionDashed>
            <SectionDashed orientation=Orientation.Left theme=self.state.theme>
              <Row style=lastSectionStyle>
                <Col md=6>
                  <h2 style=titleStyle className="h2">
                    (text(contentBlock.about.title))
                  </h2>
                  <p style=contentStyle>
                    (
                      contentBlock.about.content
                      |> Belt.List.head
                      |> Belt.Option.getWithDefault(_, [])
                      |> Belt.List.head
                      |> Belt.Option.getWithDefault(_, "")
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
                      |> concatStringWithBr
                    )
                  </p>
                </Col>
                <Col md=3>
                  <h2 style=titleStyle className="h2">
                    (text(contentBlock.follow.title))
                  </h2>
                  <p style=contentStyle>
                    <a href="https://medium.com/@bywhale." className="a">
                      (text("Medium"))
                    </a>
                    <br/>
                    <a href="https://www.linkedin.com/company/bywhale/" className="a">
                      (text("Linkedin"))
                    </a>
                    <br/>
                    <a href="https://www.instagram.com/bywhale.nyc" className="a">
                      (text("Instagram"))
                    </a>
                    <br/>
                    <a href="https://github.com/ByWhaleStudios" className="a">
                      (text("Github"))
                    </a>
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
                  <a className="a" onClick=((_) => scrollToTop()) href="javascript:void(0)">
                    (text("back to top"))
                  </a>
                </div>
              </Col>
            </Row>
          </div>
        </div>
      </div>
    </div>
  }
};

