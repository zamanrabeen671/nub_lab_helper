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
echo "Enter a number:"
read n

if [ $n -gt 0 ]
then
    echo "$n is Positive"
elif [ $n -lt 0 ]
then
    echo "$n is Negative"
else
    echo "$n is Zero"
fi
# Example 8: Largest of Two Numbers
echo "Enter first number:"
read a
echo "Enter second number:"
read b

if [ $a -gt $b ]
then
    echo "$a is Largest"
else
    echo "$b is Largest"
fi