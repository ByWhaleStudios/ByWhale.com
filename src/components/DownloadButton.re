let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("DownloadButton");

let buttonStyle =
  ReactDOMRe.Style.make(
    ~color="white",
    ~backgroundColor="blue",
    ~fontSize=".7em",
    ~width="11em",
    ~height="2.2em",
    ~display="flex",
    ~justifyContent="center",
    ~alignItems="center",
    ()
  );

let make = (~buttonText, ~href, children) => {
  ...component,
  render: _self =>
    <a style=buttonStyle href=href>
      (text(buttonText))
    </a>
};