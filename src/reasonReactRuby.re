let component = ReasonReact.statelessComponent "ReasonReactRuby";

let make ::position ::align children => {
  ...component,
  render: fun _state _self =>
    <ruby style=(ReactDOMRe.Style.make color::"#08C" ())> children </ruby>
};
