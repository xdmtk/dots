########################################################################
### Make Menubar Text bold
### disabled by default
########################################################################
style"boldmenubar"{
font_name="bold"
}widget_class"*.<GtkMenuBar>.<GtkMenuItem>.<GtkLabel>"style"boldmenubar"

########################################################################
### Make Menu Text bold
### disabled by default
########################################################################
style"boldmenu"{
font_name="bold"
}widget_class"*.<GtkMenu>*<GtkMenuItem>*<GtkLabel>"style"boldmenu"
widget"*GtkWindow.gtk-combobox-popup-menu*"style"boldmenu"
