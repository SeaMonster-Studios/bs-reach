module Item = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make:
    (~children: React.element, ~className: option(string)=?) => React.element =
    "AccordionItem";
};

module Button = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make:
    (~children: React.element, ~className: option(string)=?) => React.element =
    "AccordionButton";
};

module Panel = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make:
    (~children: React.element, ~className: option(string)=?) => React.element =
    "AccordionPanel";
};

[@bs.module "@reach/accordion"] [@react.component]
external make:
  (
    ~multiple: option(bool)=?,
    ~collapsible: option(bool)=?,
    ~readOnly: option(bool)=?,
    ~index: option(int)=?,
    ~defaultIndex: option(int)=?,
    ~onChange: option(int => unit)=?,
    ~className: option(string)=?,
    ~children: React.element
  ) =>
  React.element =
  "Accordion";

type accordionItemContext = {isExpanded: bool};

[@bs.module "@reach/accordion"]
external useAccordionItemContext: unit => accordionItemContext =
  "useAccordionItemContext";
