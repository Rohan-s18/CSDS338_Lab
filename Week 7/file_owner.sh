#!  /usr/bin/bash

# Change $8 to $9 if you are using Debian
awk '
BEGIN { print "File\tOwner" }
{ print $8, "\t", $3}
END { print " - DONE -" }
'
