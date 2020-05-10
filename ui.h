#ifndef UI_H
#define UI_H

#include <istream>
#include <ostream>

namespace ui
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
    extern istream userinputwidget; // A Variable That You Extract Into, Then A Text Widget Pops up On The UI.
    extern ostream textwidget; // Like userinputwdget, But Instead, Outputs Text.
    extern istream searchbarwidget; // Like userinputwidget, But for Search-Only.
    extern istream emailwidget; // Like userinputwidget, But for Email-Only.
    extern istream passwordwidget; // Like userinputwidget, But for Password-Only.
    extern ostream headingwidget; // Like textwidget, But for Heading-Only.
    extern ostream subheadingwidget; // Like textwidget, But for Subheading-Only.
}

#define VERSION 1.0 # Here Is The Version.

#endif
