style"gtkwidget"{
xthickness=1
ythickness=1
### arrow settings
GtkArrow::arrow-scaling=1
GtkMenu::arrow-scaling=1
GtkRange::arrow-scaling=1
GtkRange::stepper-size=16
GtkWidget::scroll-arrow-hlength=16
GtkWidget::scroll-arrow-vlength=16
GtkMenuItem::arrow-scaling=1
GtkMenuItem::arrow-spacing=5
GtkNotebook::arrow-spacing=5
GtkExpander::expander-size=16
GtkToolItemGroup::expander-size=16
GtkTreeView::expander-size=16
GtkExpander::expander-spacing=5
### checks n radios
GtkCheckButton::indicator-size=16
GtkRadioButton::indicator-size=16
GtkCheckMenuItem::indicator-size=16
GtkRadioMenuItem::indicator-size=16
GtkOptionMenu::indicator-size=16
GtkCellRendererToggle::indicator-size=16
GtkCheckButton::indicator-spacing=5
### other settings
GtkHandleBox::shadow-type=GTK_SHADOW_NONE
GtkHandleBox::shadow=GTK_SHADOW_NONE
GtkTreeView::horizontal-separator=10
GtkTreeView::vertical-separator=4
GtkWidget::focus-line-width=0
GtkWidget::focus-padding=0
GtkWidget::interior-focus=0
GtkWidget::wide-separators=1
GtkWidget::separator-height=1
GtkWidget::separator-width=1
GtkWidget::internal-padding=4
GtkWidget::window-dragging=1
GtkWidget::tooltip-alpha=245
GtkWidget::tooltip-radius=0
engine"pixmap"{
image{
function=SHADOW
shadow=IN
file="images/shadow.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=OUT
file="images/shadow.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_IN
file="images/shadow.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="images/shadow.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=NONE
file="images/none.xpm"
stretch=FALSE}
image{
function=ARROW
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/updisabled.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/downdisabled.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/leftdisabled.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/rightdisabled.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/updisabled.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/downdisabled.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/leftdisabled.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/rightdisabled.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/up.png"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/left.png"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=TAB
state=INSENSITIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/downdisabled.png"
overlay_stretch=FALSE}
image{
function=TAB
state=NORMAL
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=TAB
state=ACTIVE
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=TAB
state=PRELIGHT
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/rightdisabled.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=SEMI_COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=SEMI_COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=SEMI_COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/right.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=SEMI_COLLAPSED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/rightdisabled.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/downdisabled.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=SEMI_EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=SEMI_EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=SEMI_EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/down.png"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=SEMI_EXPANDED
file="images/none.xpm"
stretch=TRUE
overlay_file="images/downdisabled.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=OUT
file="images/checkdisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_IN
file="images/checkdisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-checkeddisabled.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_OUT
file="images/checkdisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semidisabled.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-semi.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=IN
file="images/checkdisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-checkeddisabled.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
file="images/check.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/none.xpm"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_IN
file="images/radiodisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semidisabled.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_OUT
file="images/radiodisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semidisabled.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_OUT
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-semi.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=IN
file="images/radiodisabled.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-checkeddisabled.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=IN
file="images/radio.png"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radiobox-checked.png"
overlay_stretch=FALSE}
image{
function=HANDLE
detail="handlebox"
overlay_file="images/hpaned.png"
overlay_stretch=FALSE
orientation=VERTICAL}
image{
function=HANDLE
detail="handlebox"
overlay_file="images/vpaned.png"
orientation=HORIZONTAL
overlay_stretch=FALSE}}}
class"GtkWidget"style"gtkwidget"

widget_class"*.<GtkWidget>*<GtkImage>"style"mistrender"
widget_class"*.<GtkWidget>*<GtkLabel>"style"mistrender"
widget_class"*.<GtkCellView>*"style"mistrender"
