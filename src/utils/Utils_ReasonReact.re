let text = ReasonReact.stringToElement;

let listToReactArray = (list) =>
  list
  |> Belt.List.toArray
  |> ReasonReact.arrayToElement;

let concatStringWithBr = (listString) =>
  listString
  |> Belt.List.reduce(_, [], (memo, ele) =>
       memo @ (Belt.List.length(memo) === 0 ? [] : [<br/>]) @
       [<span>(text(ele))</span>])
  |> listToReactArray;

let concatLinkWithBr = (listString, textToHrefFunction) =>
  listString
  |> Belt.List.reduce(_, [], (memo, ele) =>
       memo @ (Belt.List.length(memo) === 0 ? [] : [<br/>]) @
       [<a href=(textToHrefFunction(ele)) className="a">(text(ele))</a>])
  |> listToReactArray;