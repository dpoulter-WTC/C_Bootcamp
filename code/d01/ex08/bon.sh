ldapsearch -x "cn=*bon*" cn | tail -n 1 | sed -n 's,.*: ,,p'
