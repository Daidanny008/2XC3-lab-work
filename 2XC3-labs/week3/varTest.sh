#!/bin/bash

NAME=Dina
ADDRESS='Hamilton, Ontario'
AGE=23

echo $NAME
echo $ADDRESS
echo $AGE

echo "$NAME Hashem"
echo '$NAME Hashem'
echo "\$NAME Hashem"

echo "${NAME}Hashem"
echo "$NAMEHashem" # fail causes empty string return

FULL_NAME=${NAME}Hashem
echo $FULL_NAME
FULL_NAME="$NAME Hashem"
echo $FULL_NAME
NAME_ADDR="$NAME, $ADDRESS"
echo $NAME_ADDR


echo '$NAME Hashem'
echo $NAME Hashem
echo $AGE+1
echo $AGEplusone
