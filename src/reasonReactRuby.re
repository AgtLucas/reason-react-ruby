let component = ReasonReact.statelessComponent "ReasonReactRuby";

let make ::position ::align children => {
  ...component,
  render: fun _state _self =>
    <ruby style=(ReactDOMRe.Style.make rubyPosition:: position rubyAlign:: align ())> children </ruby>
};
