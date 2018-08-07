ldapsearch -Q  "cn=z*" cn | grep cn: | cut -c5- | sort -r | cat -e
