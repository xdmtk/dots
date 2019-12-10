#!/bin/sh
set -e
if command -v yad >/dev/null 2>&1 ;then
	_dialog=yad
elif command -v kdialog >/dev/null 2>&1 ;then
	_dialog=kdialog
else
	_dialog=cli
fi
if [ "$_dialog" = "cli" ]; then
	if [ ! -t 0 ]; then
		x-terminal-emulator -e "$0"
		exit 0
	fi
fi
_basedir="$(dirname "$(readlink -f "${0}")")"
cd "$_basedir"
##its better to have a backup than adding countless of if and elses
if [ -d "$_basedir"/backup ]; then
	rm -rf "$_basedir"/gtk
	rm -rf "$_basedir"/gtk-2.0
	rm -rf "$_basedir"/gtk-3.0
	rm -rf "$_basedir"/unity
	rm -rf "$_basedir"/openbox-3
	rm -rf "$_basedir"/xfwm4
	rm -rf "$_basedir"/metacity-1
	rm -rf "$_basedir"/xfce-notify-4.0
	rm -rf "$_basedir"/xfdashboard-1.0
	if [ -d "$_basedir/Extras" ]; then
		rm -rf "$_basedir"/Extras
	fi
	cp -R "$_basedir"/backup/* "$_basedir"
else
	mkdir -p "$_basedir"/backup
	for _all in $(ls -L "$_basedir"|grep -v backup); do
		cp -R $_all "$_basedir"/backup
	done
fi
#get optional colors
color="$1"
case $color in
	-c|--color)
	newcolor="$2";;
esac
color2="$3"
case $color2 in
	-c2|--color2)
	newcolor2="$4";;
esac
#well, we need some common tools
(command -v sed >/dev/null 2>&1 && command -v tr >/dev/null 2>&1 && command -v find >/dev/null 2>&1)||_missingdep=true
case $_missingdep in
	true)
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tYou either miss sed, tr, or find! Aborting!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox '\nYou either miss sed, tr, or find! Aborting!' --title 'Error';;
			cli)
				printf 'You either miss sed, tr, or find! Aborting!\n';;
		esac
	exit 1;;
esac
#check if we have permissions
if [ ! -w "$_basedir" ]; then
	case $_dialog in
		yad)
			yad --image=dialog-information --text '\tYou dont have write permissions!\t' --button=OK:1 --on-top --center;;
		kdialog)
			kdialog --msgbox 'You dont have write permissions!' --title 'Error';;
		cli)
			printf 'You dont have write permissions!\n';;
	esac
	exit 1
fi
#check for the right dir
if [ ! -d "$_basedir"/gtk-3.0 ]; then
	case $_dialog in
		yad)
			yad --image=dialog-information --text '\twrong dir! or wrongly installed!\t' --button=OK:1 --on-top --center;;
		kdialog)
			kdialog --msgbox 'wrong dir! or wrongly installed' --title 'Error';;
		cli)
			printf 'wrong dir! or wrongly installed\n';;
	esac
	exit 1
fi
####################
###set the bg color
####################
if [ -z ${newcolor} ]; then 
	cat <<\EOF

Some online color pickers:
https://www.w3schools.com/colors/colors_picker.asp
http://www.color-hex.com

or use:  
yad --color, kdialog --getcolor, gimp etc

EOF
fi
while [ 1 ];do
	_has_error=0
	if [ -z ${newcolor} ]; then
		case $_dialog in
			yad)
				newcolor=$(yad --color --title 'Please enter your new selected BG color in #RRGGBB:' --on-top --center);;
			kdialog)
				newcolor=$(kdialog --getcolor --title 'Please enter your new selected BG color in #RRGGBB:');;
			cli)
				read -p "Please enter your new selected BG color in #RRGGBB(The '#' is a must!): " newcolor;;
		esac
	fi
#check if there is a color
	if [ -z ${newcolor+x} ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNo color was was selected\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'No color was was selected' --title 'Error';;
			cli)
				printf 'No color was was selected\n';;
		esac
	fi
#check if we have a proper hex color #RRGGBB
	if [ "${#newcolor}" -lt 7 ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNot a valid color, less than 7 chars!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'Not a valid color, less than 7 chars!' --title 'Error';;
			cli)
				printf '\nSorry ${newcolor} is not a valid color, less than 7 chars!\n';;
		esac
	fi
	if [ "${#newcolor}" -gt 7 ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNot a valid color, more than 7 chars!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'Not a valid color, more than 7 chars!' --title 'Error';;
			cli)
				printf '\nSorry ${newcolor} is not a valid color, more than 7 chars!\n';;
		esac
	fi
	if [ "$_has_error" = "0" ]; then
		break
	else
		unset newcolor
	fi
done

####################
###now the same for the border color
####################
while [ 1 ];do
	_has_error=0
	if [ -z ${newcolor2} ]; then
		case $_dialog in
			yad)
				newcolor2=$(yad --color --title 'Please enter your new selected FG color in #RRGGBB:' --on-top --center);;
			kdialog)
				newcolor2=$(kdialog --getcolor --title 'Please enter your new selected FG color in #RRGGBB:');;
			cli)
				read -p "Please enter your new selected FG color in #RRGGBB(The '#' is a must!): " newcolor2;;
		esac
	fi
#check if there is a color
	if [ -z ${newcolor2+x} ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNo color was was selected\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'No color was was selected' --title 'Error';;
			cli)
				printf 'No color was was selected\n';;
		esac
	fi
#check if we have a proper hex color #RRGGBB
	if [ "${#newcolor2}" -lt 7 ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNot a valid color, less than 7 chars!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'Not a valid color, less than 7 chars!' --title 'Error';;
			cli)
				printf '\nSorry ${newcolor2} is not a valid color, less than 7 chars!\n';;
		esac
	fi
	if [ "${#newcolor2}" -gt 7 ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tNot a valid color, more than 7 chars!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'Not a valid color, more than 7 chars!' --title 'Error';;
			cli)
				printf '\nSorry ${newcolor2} is not a valid color, more than 7 chars!\n';;
		esac
	fi
	if [ "$newcolor2" = "$newcolor" ]; then
		_has_error=1
		case $_dialog in
			yad)
				yad --image=dialog-information --text '\tThe border color can not be the same color as the icons!\t' --button=OK:1 --on-top --center;;
			kdialog)
				kdialog --msgbox 'The border color can not be the same color as the icons!' --title 'Error';;
			cli)
				printf '\nThe border color can not be the same color as the icons!\n';;
		esac
	fi
	if [ "$_has_error" = "0" ]; then
		break
	else
		unset newcolor2
	fi
done

#recolor the theme
printf "\n\nChanging color\n\n"
find "$_basedir" -mindepth 2 -type f -not -path "*/.git/*" -not -path "*/backup/*" -not -path "*/gtksourceview/*" -not -path "*/metacity-1/*" -not -path "*/xfwm4/*" -not -path "*/unity/*" -exec sed -i 's/#7eae55/'$newcolor'/g' {} \;
find "$_basedir" -mindepth 2 -type f -not -path "*/.git/*" -not -path "*/backup/*" -not -path "*/gtksourceview/*" -not -path "*/metacity-1/*" -not -path "*/xfwm4/*" -not -path "*/unity/*" -exec sed -i 's/#7EAE55/'$newcolor'/g' {} \;
find "$_basedir" -mindepth 2 -type f -not -path "*/.git/*" -not -path "*/backup/*" -not -path "*/gtksourceview/*" -not -path "*/metacity-1/*" -not -path "*/xfwm4/*" -not -path "*/unity/*" -not -path "*/icewm/*" -exec sed -i 's/#f2f1f1/'$newcolor2'/g' {} \;
find "$_basedir" -mindepth 2 -type f -not -path "*/.git/*" -not -path "*/backup/*" -not -path "*/gtksourceview/*" -not -path "*/metacity-1/*" -not -path "*/xfwm4/*" -not -path "*/unity/*" -not -path "*/icewm/*" -exec sed -i 's/#F2F1F1/'$newcolor2'/g' {} \;
sed -i 's/#f1f2f2/'$newcolor2'/g' "$_basedir"/Extras/App_themes/icewm/DarK/default.theme

case $_dialog in
	yad)
		yad --text '\tYou might have to relogin to apply all changes\t' --title 'Done' --button=OK:1 --on-top --center;;
	kdialog)
		kdialog --msgbox 'You might have to relogin to apply all changes' --title 'Done';;
	cli)
		cat <<\EOF


d8888b.  .d88b.  d8b   db d88888b db 
88  `8D .8P  Y8. 888o  88 88'     88 
88   88 88    88 88V8o 88 88ooooo YP 
88   88 88    88 88 V8o88 88~~~~~    
88  .8D `8b  d8' 88  V888 88.     db 
Y8888D'  `Y88P'  VP   V8P Y88888P YP 

You might have to relogin to apply all changes.

EOF
sleep 5;;
esac
exit 0
