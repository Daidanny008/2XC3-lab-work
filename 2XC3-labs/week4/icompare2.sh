#!/bin/bash

if [[ $1 =~ ^[+-]?[1-9][0-9]{0,8}$ ]] 
then
	echo "1 is num"
else
	echo "bad input" >&2
        exit 1
fi

if [[ $2 =~ ^[+-]?[1-9][0-9]{0,8}$ ]]
then
	echo "2 is num"
else
        echo "bad input" >&2
        exit 1
fi

if [[ $# != 2 ]]
then
        echo "bad input" >&2
        exit 1
elif [[ $1 = $2 ]]
then
        echo "same values" >&2
        exit 1
elif [[ $1 -lt $2 ]]
then
        echo $1
else
        echo $2
fi

