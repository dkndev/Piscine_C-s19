cat /etc/passwd | grep -v '^#' | cut -f 1 -d ':' | head -n +"$FT_LINE2" | tail -n+"$FT_LINE1"
