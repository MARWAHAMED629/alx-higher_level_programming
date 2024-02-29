#!/bin/bash

# Send a POST request with an empty body to 0.0.0.0:5000/catch_me
curl -X POST -d '' http://0.0.0.0:5000/catch_me

# Exit script without printing anything (only successful exit code 0 is shown)
exit 0
