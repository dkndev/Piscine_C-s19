##
#export FT_NBR1=\\\'\?\"\\\"\'\\
#export FT_NBR2=rcrdmddd
#export FT_NBR11=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#export FT_NBR22=dcrcmcmooododmrrrmorcmcrmo
#
#\'?"\"'\ + rcrdmddd
#
# replace ' to 0 -> sed "s/\'/0/g"
# replace char -> \=1, "=2, ?=3, !=4 --> tr '\\\"\?\!' 1234
# calculat -> bc
# reformat -> tr 0123456789ABC 'gtaio luSnemf'
##


echo $FT_NBR11 + $FT_NBR22 | sed "s/\'/0/g" | tr '\\\"\?\!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'

