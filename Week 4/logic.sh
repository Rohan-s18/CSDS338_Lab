#! /usr/bin/bash

#This script shows how boolean algebra works in shell scripting

#This script takes in the sides of a triangle and tells us whether it is an equilatera, isoceles or scalene triangle

#"-a" means and
#"-o" means or

echo "Enter the first side:"
read a

echo "Enter the second side:"
read b

echo "Enter the third side"
read c

if [ $a == $b -a $b == $c ]
then 
echo "The triangle is an Equilateral triangle"
elif [ $a == $b -o $b == $c -o $c == $a ]
then 
echo "The triangle is an Isoceles triangle"
else
echo "The triangle is a Scalene triangle"
fi