#!/bin/bash

file=Linux
if [[ -d "$file" ]]; then
	echo "course"
else
	echo "very easy"
	mkdir $file
fi
