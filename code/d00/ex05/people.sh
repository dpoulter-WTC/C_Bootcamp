ldapsearch -LLL -x "(uid=z*)" cn | grep cn | cut -c 5- | sort -r
