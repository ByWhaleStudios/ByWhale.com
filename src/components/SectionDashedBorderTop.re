let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashedBorderTop");

let dashedLineStyle =
  ReactDOMRe.Style.make(
    ~display="inline-block",
    ~borderBottom="dashed 5px blue",
    ~height="100%",
    ~width="100%",
    ~overflow="auto",
    ~padding="0",
    ~margin="0",
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
    ()
  );

let titleStyle =
  ReactDOMRe.Style.make(
    ~whiteSpace="nowrap",
    ()
  );
  

let paragraphStyle = (titleTextStyle) =>
  Belt.Option.getWithDefault(
    titleTextStyle,
    ReactDOMRe.Style.make(
      ~lineHeight=".95em",
      ~marginBottom="0",
      ~paddingBottom="0",
      ()
    )
  );

let middleStyle =
  ReactDOMRe.Style.make(
    ~width="1em",
    ()
  );

let make = (
  ~title : option(string),
  ~orientation=Orientation.Left,
  ~borders=false,
  ~titleTextStyle=?,
  _children
) => {
  ...component,
  render: _self =>
    <div>
      <div style=flex>
        (
          switch(title) {
          | Some(titleString) =>
              [
                <div key="title" style=titleStyle>
                  <h1 className="h1" style=paragraphStyle(titleTextStyle)>
                    (text(titleString))
                  </h1>
                </div>,
                <div key="space" style=middleStyle />,
                <div key="dash" style=otherBox>
                  <div style=dashedLineStyle />
                </div>,
              ]
              |> (orientation === Orientation.Right ? Belt.List.reverse : (a) => a)
              |> Belt.List.toArray
              |> ReasonReact.arrayToElement
          | None =>
              <div style=otherBox>
                <div style=dashedLineStyle />
              </div>
          }
        )
      </div>
    </div>
};

