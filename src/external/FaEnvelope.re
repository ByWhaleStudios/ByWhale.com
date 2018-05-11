[@bs.module "react-icons/lib/fa"]
external comp : ReasonReact.reactClass = "FaEnvelope";

let make = (~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=comp,
    ~props={
      "style": Js.Nullable.fromOption(style),
    },
    children
  );