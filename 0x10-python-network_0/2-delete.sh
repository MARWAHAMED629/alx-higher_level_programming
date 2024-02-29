#!/bin/bash
# This script that sends a DELETE request to the URL passed as the first argument and displays A body of the response.
curl -s "$1" -X DELETE
