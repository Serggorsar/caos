#!/bin/bash

for ((i=0; i<=$#; i++)); do
    echo "parametr $i --> ${!i}"
done
