find . -type f -o -type d | wc -l | tr -d ' ' | sed -e $'s/$/\\\n/g'
