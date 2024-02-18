export _DIR_=./bin/
if test -d $_DIR_; then continue; else mkdir -p $_DIR_; fi

export MAIN_FILE=generic_sample
export LINKED_FILES="clamp.c"

export _FILENAME_=$MAIN_FILE
if test -f $_DIR_$_FILENAME_; then rm $_DIR_$_FILENAME_; fi
gcc -Os -W -Wall $_FILENAME_.c $LINKED_FILES -o $_DIR_$_FILENAME_
if test -f $_DIR_$_FILENAME_; then $_DIR_$_FILENAME_; fi
