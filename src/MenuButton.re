module Menu = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Menu";
};

module Button = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~onFocus: ReactEvent.Focus.t => unit=?,
      ~onBlur: ReactEvent.Focus.t => unit=?,
      ~children: React.element
    ) =>
    React.element =
    "MenuButton";
};

module List = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "MenuList";
};

module Items = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "MenuItems";
};

module Item = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element,
      ~onSelect: unit => unit
    ) =>
    React.element =
    "MenuItem";
};

module Popover = {
  type domRect;

  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element,
      ~portal: option(bool)=?,
      ~position: option(
                   (Js.Nullable.t(domRect), Js.Nullable.t(domRect)) =>
                   ReactDOMRe.style,
                 )
                   =?
    ) =>
    React.element =
    "MenuPopover";
};

module ExternalLink = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element,
      ~as_: string=?,
      ~target: string=?,
      ~href: string
    ) =>
    React.element =
    "MenuLink";
};
