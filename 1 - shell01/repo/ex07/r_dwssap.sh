#!/bin/sh
cat /etc/passwd | sed "/^#/d" | sed -n "n;p" | sed "s/^\([a-z_]*\):.*$/\1/g" | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed "s/,/, /g" | sed "s/, $/./g" | tr -d "\n"
