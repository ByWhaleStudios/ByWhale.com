[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "Carousel";

let make = (~activeIndex, ~next, ~previous, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "activeIndex": activeIndex,
      "next": next,
      "previous": previous,
    },
    children
  );