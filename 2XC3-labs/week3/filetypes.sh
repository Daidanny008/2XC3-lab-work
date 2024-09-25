#!/bin/bash

if [[ $# = 0 ]]
then
	echo "missing input" >&2
	exit 1
else
	for arg in "$@"
	do 
		if [[ -f $arg ]]
		then
			echo "$arg is a file"
		elif [[ -d $arg ]]
		then
			echo "$arg is a directory"
		else
			echo "$arg is unknown"
		fi
	done
	exit 0
fi
