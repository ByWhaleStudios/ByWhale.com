let text = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("DownloadButton");

let buttonStyle =
  ReactDOMRe.Style.make(
    ~color="white",
    ~backgroundColor="blue",
    ~fontSize=".6em",
    ~width="11em",
    ~height="2.5em",
    ~display="flex",
    ~marginRight="1em",
    ~justifyContent="center",
    ~alignItems="center",
    ()
  );

let make = (~buttonText, ~href, _children) => {
  ...component,
  render: _self =>
    <a style=buttonStyle href=href>
      (text(buttonText))
    </a>
};