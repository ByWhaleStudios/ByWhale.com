[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselItem";

let make = (~onExiting, ~onExited, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "onExiting": onExiting,
      "onExited": onExited,
    },
    children
  );