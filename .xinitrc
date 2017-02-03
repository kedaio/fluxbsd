# input support
export GTK_IM_MODULE="scim"
export QT_IM_MODULE="scim"
export XMODIFIERS="@im=SCIM"
/usr/local/bin/scim -d



# character display & encoder in terminal and other app

export LC_CTYPE=zh_CN.UTF-8
export LC_MESSAGES=zh_CN.UTF-8
#exec awesome
exec startfluxbox
#xrdb ~/.Xresources
