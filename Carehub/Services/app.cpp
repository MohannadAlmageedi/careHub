#!/bin/bash

read -p "Enter a number to count down from: " n

while [ "$n" -gt 0 ]; do
  echo "$n"
  n=$((n - 1))
done

echo "Countdown complete!"
