#!/bin/bash

until [ -z "$1" ]
do
echo -n $1
shift
done
printf "\n"

echo
if [ 5 -ge 6 ]
then
exit 6
else
exit 4
fi
printf "\n\n"
echo $?
