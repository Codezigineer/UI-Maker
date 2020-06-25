#ifndef UI_H
#define UI_H

#include <istream>
#include <ostream>

namespace ui
{
    using x = int; // The X Coord of a widget.
    using y = int; // The Y Coord of a widget.
    using width = int; // The Width of a widget.
    using height = int; // The Height of a widget.
    
    struct widget 
    {
        extern int typeofwidget = 0; /* This Shows What Type Of Widget It Is. Here Is A List/Refrence:
    0 - The whole UI.
    1 - Some Text.
    2 - Some Buttons.
    3 - Radio Buttons.
    4 - User Input.
    5 - Headings.
    6 - Subheadings.
    7 - Lists.
    8 - Menus.
    9 - Navigation Menus.
    10 - Web UI.
    11 - Map UI.
    12 - Search Bar.
    13 - Password.
    14 - email.
    15 - Custom UI.
    16 - Custom Widget.
    */
        widget children[]; // The children widgets.
        widget parent; // The parent widget.
        x x_coord; // The X Coord.
        y y_coord; // The Y Coord.
        width width; // The Width.
        height height; // The Height.
    };
    
    extern istream userinputwidgetstream; // A Variable That You Extract Into, Then A Text Widget Pops up On The UI.
    extern ostream textwidgetstream; // Like userinputwdget, But Instead, Outputs Text.
    extern istream searchbarwidgetstream; // Like userinputwidget, But for Search-Only.
    extern istream emailwidgetstream; // Like userinputwidget, But for Email-Only.
    extern istream passwordwidget; // Like userinputwidget, But for Password-Only.
    extern ostream headingwidgetstream; // Like textwidget, But for Heading-Only.
    extern ostream subheadingwidgetstream; // Like textwidget, But for Subheading-Only.
}

#define VERSION 1.0 // Here Is The Version.

#endif
