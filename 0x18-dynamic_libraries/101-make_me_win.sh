#!/bin/bash
wget -P .. https://raw.githubusercontent.com/dunsinadesina/alx-low_level_programming/master/0x18-dynamic_libraries/libtestfile.so
export LD_PRELOAD="$PWD/../libtestfile.so"
