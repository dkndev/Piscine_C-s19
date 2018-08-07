cat /etc/passwd | grep -v '^#' | cut -f 1 -d ':' | sed -n "n;p" | rev | sort -r | head -n +"$FT_LINE2" | tail -n+"$FT_LINE1" | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./'

