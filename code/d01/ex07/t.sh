cat /etc/passwd | grep -v '#' | sed -n 'n;p' | sed 's,:.*,,g' | rev | sort -r
