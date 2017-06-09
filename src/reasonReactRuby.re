module ReasonReactRuby = {
  include ReactRe.Component.JsProps;

  type props = { position: string, align: string, children: list };

  let render { props } => {
    <ruby style=(
      ReactDOMRe.Style.make
        color:: "#08C"
        ()
    )>
      (ReactRe.arrayToElement (Array.of_list props.children))
    </ruby>
  }
};

include ReactRe.CreateComponent ReasonReactRuby;

let createElement ::position ::align ::children => wrapProps { position, align, children };
