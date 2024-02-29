#!/bin/bash
# This Script sends a request to an URL passed as an argument, and displays only the status code.
curl -so /dev/null -w "%{http_code}" "$1"
