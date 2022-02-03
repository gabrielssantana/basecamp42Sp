#!/bin/sh

cat /etc/passwd | egrep -v "^#" | awk -F":" '{if (NR % 2 == 0) print $1}' | rev | sort -r | awk -vLin1=$FT_LINE1 -vLin2=$FT_LINE2 '{if (NR >= Lin1 && NR <=Lin2) print $1","}' | tr -d "\n" | sed 's/,$/./' | sed 's/,/, /g'