#!/bin/bash
odin build ./src -out:program_odin -o:speed
if [ $? -eq 0 ]; then
  echo "Build successful!"
else
  echo "Build failed!"
fi
