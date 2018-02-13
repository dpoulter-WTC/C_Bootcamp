ldapsearch -x -LLL uid=$(whoami) dn | grep dn: |cut -c 5-
