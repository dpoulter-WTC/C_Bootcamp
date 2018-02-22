cat $1 | grep -i "Nicolas	Bomber" | awk '{print $(NF-1)}' | grep "-"
