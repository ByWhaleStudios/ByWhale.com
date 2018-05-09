[@bs.module "reactstrap"]
external component : ReasonReact.reactClass = "CarouselCaption";

let make = (~captionText, ~captionHeader, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=component,
    ~props={
      "captionText": captionText,
      "captionHeader": captionHeader,
    },
    children
  );