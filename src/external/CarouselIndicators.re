[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselIndicators";

let make = (~items, ~activeIndex, ~onClickHandler, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "items": items,
      "activeIndex": activeIndex,
      "onClickHandler": onClickHandler,
    },
    children
  );