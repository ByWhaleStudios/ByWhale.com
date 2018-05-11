[@bs.module "react-icons/lib/fa"]
external comp : ReasonReact.reactClass = "FaEnvelope";

let make = (children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=comp,
    ~props=Js.Obj.empty(),
    children
  );