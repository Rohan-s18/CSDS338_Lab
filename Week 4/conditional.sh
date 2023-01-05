#! /usr/bin/bash

#Simple Script to find the relationship between 2 numbers using if, elif and else statements statements

echo "Enter a number:"
read x

echo "Enter another number:"
read y

if [ $x -gt $y ]
then 
echo "The first number is greater than the second number"
elif [ $x -lt $y ]
then
echo "The first number is less than the second number"
elif [ $x -eq $y ]
then
echo  "The first number is equal to the second number"
else
echo "Lol invalid inputs I guess?"
fi