#MODLUA_DEP=lua52 #51
#MODLUA_VERSION=5.2 # 5.1
#MODLUA_DEP_VERSION=52 #51
env CPPFLAGS="-I/usr/local/include" LDFLAGS="-L/usr/local/lib" LUA_CFLAGS="`pkg-config --cflags lua51`" LUA_LIBS="`pkg-config --libs lua51`" ./configure \
--enable-imlib2 \
--enable-mpd \
--enable-rss \
--disable-config-output \
--disable-moc \
--disable-portmon \
--enable-lua \
--enable-lua-cairo \
--enable-lua-imlib2 \
--enable-curl \
--with-libiconv-prefix=/usr/local \
--with-gnu-ld=yes
