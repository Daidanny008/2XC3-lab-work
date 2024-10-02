#!/bin/bash
echo "There are $(cat $1 | wc -l) in $1"
echo "There are $(cat $1 | grep -P "^[a-zA-Z0-9]{$2,$3}\$" | wc -l) words between 2 and 7 characters long"
