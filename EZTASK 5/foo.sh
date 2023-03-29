#! /usr/bin/bash

echo "Enter a number:"

read a

i=a

while [[ $i -gt 0 ]] ; do
	./a.out >> jinkim.txt
	((i -= 1))
done

echo "We're Done!!!!!"
