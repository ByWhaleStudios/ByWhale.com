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
    ~height="100%",
    ()
  );

let titleStyle =
  ReactDOMRe.Style.make(
    ~color="blue",
    ~whiteSpace="nowrap",
    ()
  );

let paragraphStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="0",
    ~paddingBottom="0",
    ()
  );

let sectionDashedBorderTopStyle =
  ReactDOMRe.Style.make(
    ~marginBottom="20px",
    ()
  );


let make = (~title : option(string), ~orientation : option(Orientation.t), _children) => {
  ...component,
  render: _self =>
    <div style=sectionDashedBorderTopStyle>
      (
        switch(orientation, title) {
          | (Some(Orientation.Right), Some(titleString)) =>
              <div style=flex>
                <div style=otherBox>
                  <div style=dashedLineStyle />
                </div>
                <div style=titleStyle>
                  <h1 style=paragraphStyle>
                    (text(titleString))
                  </h1>
                </div>
              </div>
          
          | (_, Some(titleString)) =>
              <div style=flex>
                <div style=titleStyle>
                  <h1 style=paragraphStyle>
                    (text(titleString))
                  </h1>
                </div>
                <div style=otherBox>
                  <div style=dashedLineStyle />
                </div>
              </div>
          | _ =>
            <div style=otherBox>
              <div style=dashedLineStyle />
            </div>
          }
      )
    </div>
};

