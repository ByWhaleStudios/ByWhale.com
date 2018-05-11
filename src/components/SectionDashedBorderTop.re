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

let otherBox = (top) =>
  ReactDOMRe.Style.make(
    ~alignSelf=top ? "flex-start" : "flex-end",
    ~width="100%",
    ~marginTop=(top ?"-21px" : "7px"),
    ()
  );

let titleStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~whiteSpace="nowrap",
    ()
  );
  

let paragraphStyle = (titleTextStyle) =>
  Belt.Option.getWithDefault(
    titleTextStyle,
    ReactDOMRe.Style.make(
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

let borderStyle = (borders) =>
  switch(borders){
  | true =>
    ReactDOMRe.Style.make(
      ~borderLeft="dashed 10px blue",
      ~borderWidth="5px",
      ()
    )
  | false =>
      ReactDOMRe.Style.make(())
  };
let make = (
  ~title : option(string),
  ~orientation=Orientation.Left,
  ~top=false,
  ~borders=false,
  ~titleTextStyle=?,
  _children
) => {
  ...component,
  render: _self =>
    <div style=borderStyle(borders)>
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
                <div key="dash" style=otherBox(top)>
                  <div style=dashedLineStyle />
                </div>,
              ]
              |> (orientation === Orientation.Right ? Belt.List.reverse : (a) => a)
              |> Belt.List.toArray
              |> ReasonReact.arrayToElement
          | None =>
              <div style=otherBox(top)>
                <div style=dashedLineStyle />
              </div>
          }
        )
      </div>
    </div>
};

