#!/bin/ksh
pkgs="git fluxbox colorls gohufont scim-fcitx scrot feh zh-wqy-zenhei-ttf xombrero"

if [[ $SHELL != "*bash" ]]; then
	uid=$(id | grep -o 'uid=[0-9]*' | awk -F"=" '{print $2}')
else
	uid=$UID
fi

if [ ! $uid -eq 0 ]; then
	echo "please run as root user. exiting ..."
	exit
fi

if [[ $PKG_PATH == "" ]]; then
	export PKG_PATH=https://mirrors.tuna.tsinghua.edu.cn/OpenBSD/$(uname -r)/packages/$(uname -m)/
fi 

echo "installing packages $pkgs ... "
echo "   and it may take a few minutes, depends on your internet speed"
pkg_add -v "$pkgs" 

if [[ $? -eq 0 ]]; then
	echo "=== package install completed ==="
else
	echo "=== something went wrong with package install. exiting ..."
	exit 3
fi

echo "copying stuff to $HOME ..."

for i in .tmux.conf .profile .Xdefaults .xinitrc .fluxbox
do
	if [[ -f $HOME/$i ]]; then
		mv $HOME/$i $HOME/$i.bak.$$
	fi
	cp -r $i $HOME/
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
