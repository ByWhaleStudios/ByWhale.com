[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselIndicators";

let make = (~items, ~className=?, ~activeIndex, ~onClickHandler, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "items": items |> Belt.List.toArray,
      "className": className,
      "activeIndex": activeIndex,
      "onClickHandler": onClickHandler,
    },
    children
  );