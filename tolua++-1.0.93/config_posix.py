
## This is the POSIX configuration file (will be included for cygwin, mingw
# and possibly mac OSX and BSDs)
# use 'scons -h' to see the list of command line options available

# flags for the compiler
#CCFLAGS = []
CCFLAGS = ['-O2','-I/usr/local/include/lua-5.1','-L /usr/local/lib', '-Wall']
LIBPATH = ['/usr/local/lib']

# this is the default directory for installation. Files will be installed on
# <prefix>/bin, <prefix>/lib and <prefix>/include when you run 'scons install'
#
# You can also specify this directory on the command line with the 'prefix'
# option

prefix = '/usr/local'

# libraries
#LIBS = ['lua', 'lualib', 'm']
LIBS = ['lua', 'm']



import os
