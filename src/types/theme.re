type theme =
  | AtariBlue
  | AtariBlack
  | Minimal
;

let allThemes = [AtariBlue, AtariBlack, Minimal];

let themeToString = (theme) =>
  switch(theme){
  | AtariBlue => "AtariBlue"
  | AtariBlack => "AtariBlack"
  | Minimal => "Minimal"
  };

let stringToTheme = (theme) =>
  switch(theme){
  | "AtariBlue" => AtariBlue
  | "AtariBlack" => AtariBlack
  | "Minimal" => Minimal
  | _ => AtariBlue
  };