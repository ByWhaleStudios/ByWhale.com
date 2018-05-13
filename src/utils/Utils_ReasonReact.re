let text = ReasonReact.stringToElement;

let listToReactArray = (list) =>
  list
  |> Belt.List.toArray
  |> ReasonReact.arrayToElement;

let concatStringWithBr = (listString) =>
  listString
  |> Belt.List.reduce(_, [], (memo, ele) =>
       memo @ (Belt.List.length(memo) === 0 ? [] : [<br key=(ele ++ "br")/>]) @
       [<span key=ele>(text(ele))</span>])
  |> listToReactArray;

let concatLinkWithBr = (listString, textToHrefFunction) =>
  listString
  |> Belt.List.reduce(_, [], (memo, ele) =>
       memo @ (Belt.List.length(memo) === 0 ? [] : [<br key=(ele ++ "br")/>]) @
       [<a key=ele href=(textToHrefFunction(ele)) className="a">(text(ele))</a>])
  |> listToReactArray;