ldapsearch -Q -LLL "sn=*bon*" sn | grep sn | wc -l | sed 's/ //g' | sed -e $'s/$/\\\n/g'
