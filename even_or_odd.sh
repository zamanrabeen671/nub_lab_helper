#!/bin/bash

echo "Enter a number:"
read n

if [ $((n%2)) -eq 0 ]
then
    echo "$n is Even"
else
    echo "$n is Odd"
fi

# Example 7: Positive, Negative or Zero
# Example 8: Largest of Two Numbers