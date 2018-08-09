ifconfig | grep ether | awk -F 'media' '{print $1}'| awk 'NF' | cut -d ' ' -f2
