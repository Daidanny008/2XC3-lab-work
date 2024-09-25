#!/bin/bash

if cd $1
then 
	echo "$1 already exists" >&2
elif mkdir $1
then 
	echo "Created $1 directory."
else
	echo "Could not create $1 directory. Aborting." >&2
	exit 1
fi
