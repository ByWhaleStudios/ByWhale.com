[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselControl";

let make = (~direction, ~directionText, ~onClickHandler, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "direction": direction,
      "directionText": directionText,
      "onClickHandler": onClickHandler,
    },
    children
  );