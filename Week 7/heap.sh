#! /usr/bin/bash

#This script will give us the dynamically allocated memory (heap space) for all of the currently running processes in memory

#Getting the proc maps, piping the output to get the lines that contain the word heap and then storing it into heaplist
heaplist=cat /proc/*/maps | grep heap

#Same thing for stacks
stacklist=cat /proc/*/maps | grep stack

echo Heap Stats:
echo "$heaplist"

echo ""
echo Stack Stats
echo "$stacklist"


