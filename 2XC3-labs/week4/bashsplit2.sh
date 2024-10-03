#!/bin/bash

while read line
do
        for arg in $line
        do
		if [[ $arg =~  ^[:alnum:]+$ ]]
		then
                	echo $arg
		fi
        done
done

