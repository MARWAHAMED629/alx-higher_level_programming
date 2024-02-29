#!/bin/bash
#This Script that take an URL and shows the Allowed options.
curl -sI -X OPTIONS "$1" | grep "Allow:" | cut -d " " -f 2-
