module ReasonReactRuby = {
  include ReactRe.Component.JsProps;

  type props = { position: string, align: string };

  let render { props } => {
    <ruby style={{ rubyPosition: props.position, rubyAlign: props.align }}>
      {props.children}
    </ruby>
  }
};

include ReactRe.CreateComponent ReasonReactRuby;
