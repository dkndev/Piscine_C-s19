ldapsearch -LLL -Q "uid=z*" uid | grep uid: | cut -c6- | sort -r
