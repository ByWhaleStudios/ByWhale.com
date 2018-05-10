[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselItem";

let make = (~keyVal, ~onExiting, ~onExited, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "key": keyVal,
      "onExiting": onExiting,
      "onExited": onExited,
    },
    children
  );