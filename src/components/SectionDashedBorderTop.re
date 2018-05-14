let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("SectionDashedBorderTop");

let dashedLineStyle = (theme) =>
  switch(theme){
  | Theme.AtariBlue =>
      ReactDOMRe.Style.make(
        ~display="inline-block",
        /*~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",*/
        ~backgroundImage="repeating-linear-gradient(to right, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to right, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, blue 0%, blue 75%, transparent 75%, transparent 100%)",
        ~backgroundPosition="left top, left bottom, left top, right top",
        ~backgroundRepeat="repeat-x, repeat-x, repeat-y, repeat-y",
        ~backgroundSize="20px 3px, 20px 3px, 3px 20px, 3px 20px",
        ~height="3px",
        ~width="100%",
        ~overflow="auto",
        ~padding="0",
        ~margin="0",
        ()
      )
  | Theme.AtariBlack =>
      ReactDOMRe.Style.make(
        ~display="inline-block",
        /*~border="dashed " ++ (dashWidth |> string_of_int) ++"px blue",*/
        ~backgroundImage="repeating-linear-gradient(to right, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to right, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, white 0%, white 75%, transparent 75%, transparent 100%), repeating-linear-gradient(to bottom, white 0%, white 75%, transparent 75%, transparent 100%)",
        ~backgroundPosition="left top, left bottom, left top, right top",
        ~backgroundRepeat="repeat-x, repeat-x, repeat-y, repeat-y",
        ~backgroundSize="20px 3px, 20px 3px, 3px 20px, 3px 20px",
        ~height="3px",
        ~width="100%",
        ~overflow="auto",
        ~padding="0",
        ~margin="0",
        ()
      )
  | _ => ReactDOMRe.Style.make(())
  };

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
  ~theme,
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
                (theme === Theme.AtariBlue || theme === Theme.AtariBlack) ? <div key="space" style=middleStyle /> : <div/>,
                (theme === Theme.AtariBlue || theme === Theme.AtariBlack) ? 
                  <div key="dash" style=otherBox>
                    <div style=dashedLineStyle(theme) />
                  </div>:
                  <div/>,
              ]
              |> (orientation === Orientation.Right ? Belt.List.reverse : (a) => a)
              |> Belt.List.toArray
              |> ReasonReact.arrayToElement
          | None =>
              (theme === Theme.AtariBlue || theme === Theme.AtariBlack) ? 
                <div style=otherBox>
                  <div style=dashedLineStyle(theme) />
                </div> :
                <div/>
          }
        )
      </div>
    </div>
};

