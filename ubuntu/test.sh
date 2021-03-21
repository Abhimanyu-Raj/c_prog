#!/bin/bash
pwd
ls
echo "File Name: $0"
echo "First Parameter : $1"
echo "Second Parameter : $2"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number of Parameters : $#"
NAME="ABHI"
echo "$NAME"
A=10
B=10
if [ $A == $B ] 
 then
     echo pass
else 
       echo fail
fi
echo "enter file name"
read file_1
if [ -r $file_1 ]
 then
	 echo done
else
	echo not readable
fi
