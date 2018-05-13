let getFromStringListList = (listOfList, index, index2) =>
  listOfList
  |> Belt.List.get(_, index)
  |> Belt.Option.getWithDefault(_, [])
  |> Belt.List.get(_, index2)
  |> Belt.Option.getWithDefault(_, "");