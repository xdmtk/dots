style"gimp"{
GtkPaned::handle-size=5
GimpDockWindow::default-height=240
GimpDock::font-scale=1
GimpMenuDock::minimal-width=200
GimpDockWindow::menu-preview-size=menu
GimpToolPalette::tool-icon-size=menu
GimpToolPalette::button-relief=none
GimpDockbook::tab-border=5
GimpDockbook::tab-icon-size=menu
GimpColorNotebook::tab-border=0
GimpColorNotebook::tab-icon-size=menu
GimpDeviceEditor::handle-size=12
GimpDockable::content-border=1
GimpEditor::content-spacing=1
GimpEditor::button-spacing=1
GimpEditor::button-icon-size=menu
GimpDataEditor::minimal-height=64
GimpFrame::label-spacing=5
GtkDialog::content-area-border=0
GtkDialog::button-spacing=6
GtkDialog::action-area-border=12
GimpUnitComboBox::appears-as-list=0}
class"GimpImageWindow"style"gimp"

widget_class"*GimpSpinScale"style"gtkspinbutton"

style"gimpspinscale"{
base[NORMAL]={0.20,0.19,0.19}
base[SELECTED]=@selected_bg_color
base[ACTIVE]=@selected_bg_color
text[NORMAL]=shade(0.5,@fg_color)
base[SELECTED]={0.20,0.19,0.19}
base[ACTIVE]={0.20,0.19,0.19}}
widget_class"*.GimpSpinScale"style"gimpspinscale"

widget_class"*GimpDockable*GtkButton"style"toolbutton"

style"gimpdockablebutton"{
GtkButton::inner-border={0,0,0,0}}
widget_class"*GimpDockable*GimpButton"style"gimpdockablebutton"

style"gimptooldialogframe"{
xthickness=0
ythickness=0
engine"pixmap"{
image{
function=SHADOW
file="images/none.xpm"
stretch=TRUE}}}
widget_class"*GimpToolDialog.GtkVBox.GtkFrame"style"gimptooldialogframe"
