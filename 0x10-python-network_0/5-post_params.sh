#!/bin/bash
# This Script that sends a POST request and displays the Body Response
curl -s -X POST -d "email=test@gmail.com&subject=I will always be here for PLD" "$1"
