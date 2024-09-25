#!/bin/bash

if [[ $# != 2 ]]
then
	echo "bad input" >&2
	exit 1
elif [[ $1 = $2 ]]
then
	echo "same values" >&2
	exit 1
elif [[ $1 < $2 ]]
then 
	echo $1
else
	echo $2
fi
