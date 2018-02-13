cat /etc/passwd | grep -v '#' | sed -n 'n;p' | sed 's,:.*,,g' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr '\n' ',' | rev | cut -c 2- | rev | sed 's/\([^|]\)$/\1./'
