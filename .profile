# $OpenBSD: dot.profile,v 1.4 2005/02/16 06:56:57 matthieu Exp $
#
# sh/ksh initialization

PATH=$HOME/bin:/bin:/sbin:/usr/bin:/usr/sbin:/usr/X11R6/bin:/usr/local/bin:/usr/local/sbin:/usr/games:.
TERM=wsvt25
export PATH HOME TERM
alias ls='colorls -G'
alias vi='/usr/local/bin/vim'
export PS1='[\e[1;31m\u\e[0m@\e[0;36m\h\e[0m \w]$ '
export LC_ALL='en_US.UTF-8'
