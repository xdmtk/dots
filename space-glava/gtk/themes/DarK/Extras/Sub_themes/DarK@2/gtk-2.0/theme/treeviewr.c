style"gtktreeviewheader"{
xthickness=2
ythickness=2
GtkButton::inner-border={8,8,2,8}
bg[NORMAL]=shade(0.85,@bg_color)
bg[SELECTED]=shade(0.85,@bg_color)
bg[PRELIGHT]=shade(0.85,@bg_color)
bg[ACTIVE]=@selected_bg_color
bg[INSENSITIVE]=shade(0.85,@bg_color)
engine"pixmap"{
image{
function=SHADOW
file="images/treeviewheader.png"
border={0,2,0,2}
stretch=TRUE}}}
widget_class"*.<GtkTreeView><GtkButton>"style"gtktreeviewheader"
widget_class"*.<GtkCTree><GtkButton>"style"gtktreeviewheader"
widget_class"*.<GtkList><GtkButton>"style"gtktreeviewheader"
widget_class"*.<GtkCList><GtkButton>"style"gtktreeviewheader"

widget_class"*.<GtkTreeView><GtkButton>*<GtkLabel>"style"mistrenderlabelbold"

