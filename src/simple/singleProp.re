module MyComponent = {
  include ReactRe.Component.Stateful;
  let name = "MyComponent";
  type props = {foo: string};
  /*...*/
};

include ReactRe.CreateComponent MyComponent;
let createElement ::foo => wrapProps {foo: foo};
