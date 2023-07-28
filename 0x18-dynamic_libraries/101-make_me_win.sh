#!/bin/bash
sleep 98
cp 101-make_me_win.so .
export LD_PRELOAD=./101-make_me_win.so
./gm 9 8 10 24 75 9
rm 101-make_me_win.so
rm 101-make_me_win.sh
