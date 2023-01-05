#! /usr/bin/bash

#This script will show us how to find the factorial of a given number 

echo "Enter a number:"
read a

#Declaring variables 
i=a
fact=1

#While loop
# "-gt" means greater than
#To change the value of a variable you should surround it with 2 Parentheses
while [[ $i -gt 1 ]] ; do
	((fact *= i ))
	((i -= 1))
done

echo "$a factorial is $fact"