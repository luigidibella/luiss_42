#!/bin/sh

find $PWD \( -type f -or -type d \) -name ".*" -prune -o -print | wc -l
 

