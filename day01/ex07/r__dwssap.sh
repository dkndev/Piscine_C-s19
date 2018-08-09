##
# remove comments -> grep -v '^#'
# extract login name -> cut -f 1 -d ':'
# ever other line starting form the second (odd) -> sed -n "p;n"
# reverse login name (nelis -> silen) -> rev
# sort alfb and reverse -> sort -r
# between line numbers -> head -n +"$FT_LINE2" | tail -n+"$FT_LINE1"
# comma separated -> paste -s -d"," -
# add space after comma -> sed 's/,/, /g'
# end with a '.' (dote) sed 's/$/./'
##


cat /etc/passwd | grep -v '^#' | cut -f 1 -d ':' | sed -n "p;n" | rev | sort -r | head -n +"$FT_LINE2" | tail -n+"$FT_LINE1" | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./'
