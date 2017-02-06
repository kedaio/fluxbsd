#!/bin/ksh
pkgs="rxvt-unicode gthumb pcmanfm p7zip fluxbox colorls gohufont scim-fcitx scrot feh zh-wqy-zenhei-ttf xombrero vim-7.4.1467p1-no_x11-perl-python-ruby"

if [[ $PKG_PATH == "" ]]; then
	 export PKG_PATH=https://mirrors.tuna.tsinghua.edu.cn/OpenBSD/$(uname -r)/packages/$(uname -m)/
fi 

if [[ ! -f /etc/doas.conf ]]; then
	echo "please config doas before running this script. Exiting ..."
	exit 5
fi
echo "installing packages $pkgs ... "
echo "   and it may take a few minutes, depends on your internet speed"

doas pkg_add -v $pkgs 

if [[ $? -eq 0 ]]; then
	echo "=== package install completed ==="
else
	echo "=== something went wrong with package install. exiting ..."
	exit 3
fi

echo "copying stuff to $HOME ..."

for i in .tmux.conf .profile .Xdefaults .xinitrc .gtkrc-2.0
do
	if [[ -f $HOME/$i ]]; then
		mv $HOME/$i $HOME/$i.bak.$$
	fi
	cp  $i $HOME/
done

for i in .icons .themes .config .fluxbox
do
	if [[ -d $HOME/$i ]]; then
		cp -R $i/* $HOME/$i/
	else
		cp -R $i $HOME
	fi

done

[[ -d $HOME/.fonts ]] || mkdir $HOME/.fonts
cp -r fonts/* $HOME/.fonts
echo "installing custom fonts ..."
cd $HOME/.fonts; ./install

echo "##########################################################"
echo
echo "Completed! please run "startx" within a console terminal "
echo
echo "##########################################################"
