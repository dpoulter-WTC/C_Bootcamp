ifconfig | grep "inet " | sed -e "s,.*inet ,," | sed -e "s, .*,," 
