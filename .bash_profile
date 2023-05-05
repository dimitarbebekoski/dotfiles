# shellcheck source=/home/dimitar/.config/bash/bashrc
export EDITOR=/usr/bin/nvim
export MOZ_ENABLE_WAYLAND=1
export GRIM_DEFAULT_DIR="$HOME"/img/grim

export XDG_CONFIG_HOME="$HOME"/.config
export XDG_CACHE_HOME="$HOME"/.cache
export XDG_DATA_HOME="$HOME"/.local/share
export XDG_STATE_HOME="$HOME"/.local/state
export XDG_DATA_DIRS=/usr/local/share:/usr/share
export XDG_CONFIG_DIRS=/etc/xdg

export CARGO_HOME="$XDG_DATA_HOME"/cargo
export NPM_CONFIG_USERCONFIG="$XDG_CONFIG_HOME"/npm/npmrc
export GTK2_RC_FILES="$XDG_CONFIG_HOME"/gtk-2.0/gtkrc
export HISTFILE="$XDG_DATA_HOME"/bash/history
export GNUPGHOME="$XDG_DATA_HOME"/gnupg
export CUDA_CACHE_PATH="$XDG_CACHE_HOME"/nv
export XAUTHORITY="$XDG_RUNTIME_DIR"/Xauthority
export WINEPREFIX="$XDG_DATA_HOME"/wine
export W3M_DIR="$XDG_DATA_HOME"/w3m
export JUPYTER_CONFIG_DIR="$XDG_CONFIG_HOME"/jupyter
export GRADLE_USER_HOME="$XDG_DATA_HOME"/gradle
export IPYTHONDIR="${XDG_CONFIG_HOME}/ipython"
export RUSTUP_HOME="$XDG_DATA_HOME"/rustup
export LEIN_HOME="$XDG_DATA_HOME"/lein
export PYTHONSTARTUP="/etc/python/pythonrc"
export GVIMINIT="let \$MYGVIMRC = !has(\"nvim\") ? \"$XDG_CONFIG_HOME/vim/gvimrc\" : \"$XDG_CONFIG_HOME/nvim/init.gvim\" | so \$MYGVIMRC"
export VIMINIT="let \$MYVIMRC = !has(\"nvim\") ? \"$XDG_CONFIG_HOME/vim/vimrc\" : \"$XDG_CONFIG_HOME/nvim/init.lua\" | so \$MYVIMRC"
export XINITRC="$XDG_CONFIG_HOME"/X11/xinitrc
export XSERVERRC="$XDG_CONFIG_HOME"/X11/xserverrc
export ANDROID_HOME="$XDG_DATA_HOME"/android
export _JAVA_OPTIONS=-Djava.util.prefs.userRoot="$XDG_CONFIG_HOME"/java
export ERRFILE="$XDG_CACHE_HOME"/X11/xsession-errors
export USERXSESSION="$XDG_CACHE_HOME"/X11/xsession
export USERXSESSIONRC="$XDG_CACHE_HOME"/X11/xsessionrc
export ALTUSERXSESSION="$XDG_CACHE_HOME"/X11/Xsession
export XAUTHORITY="$XDG_RUNTIME_DIR"/Xauthority

[[ -d "$HOME"/.pki/ ]] && rm -rf "$XDG_DATA_HOME"/pki && mv "$HOME"/.pki "$XDG_DATA_HOME"/pki
[[ -d "$HOME/.local/bin" ]] && PATH="$HOME/.local/bin:$PATH"
[[ -d "$HOME/bin" ]] && PATH="$HOME/bin:$PATH"

BASH_RC="$XDG_CONFIG_HOME"/bash/bashrc
[[ -s "$BASH_RC" ]] && . "$BASH_RC"

[ "$(tty)" = "/dev/tty1" ] && exec sway
