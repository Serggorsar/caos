#!/bin/bash

for ((i=1; i<=$#; i++)); do
    res=$res${!i}
done
echo $res
