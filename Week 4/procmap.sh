#! /usr/bin/bash

#printing the process memory map of this bash process and sending it to the command line argument file

#The "$$" gives us the pid of the bash process
#Tge $1 gives us the first command line argument

cat /proc/$$/maps > $1

echo Tranfer Completed!