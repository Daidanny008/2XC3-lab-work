#!/bin/bash
if [[ $1 = Sam ]]
then
	echo "Yay!"
	exit 0
elif [[ $1 = "" ]]
then
	echo "Empty String"
	exit 0
elif [[ $1 -lt 0 ]]
then
        echo "$1 is less than 0"
        exit 0
elif [[ $1 -le 0 ]]
then
        echo "$1 is less than or equal to 0"
        exit 0
elif [[ $1 -gt 0 ]]
then
        echo "$1 is more than 0"
        exit 0
elif [[ $1 -ge 0 ]]
then
        echo "$1 is more than or equal to 0"
        exit 0
else
	echo "Boo!"
	exit 1
fi
