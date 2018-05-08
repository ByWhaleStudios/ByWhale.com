[@bs.module "reactstrap"]
external col : ReasonReact.reactClass = "Col";

let make = (~style=?, ~xs=?, ~md=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=col,
    ~props={
      "style": Js.Nullable.fromOption(style),
      "xs": Js.Nullable.fromOption(xs),
      "md": Js.Nullable.fromOption(md),
    },
    children
  );