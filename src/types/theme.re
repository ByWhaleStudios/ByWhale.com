type theme =
  | Retro
  | Minimal
;

let allThemes = [Retro, Minimal];

let themeToString = (theme) =>
  switch(theme){
  | Retro => "Retro"
  | Minimal => "Minimal"
  };

let stringToTheme = (theme) =>
  switch(theme){
  | "Retro" => Retro
  | "Minimal" => Minimal
  | _ => Minimal
  };