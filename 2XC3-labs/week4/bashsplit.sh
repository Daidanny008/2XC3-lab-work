#!/bin/bash

while read line
do
        for arg in $line
        do
                echo $arg
        done
done
