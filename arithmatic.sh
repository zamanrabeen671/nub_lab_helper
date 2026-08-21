#!/bin/bash

echo "Enter first number:"
read a

echo "Enter second number:"
read b

echo "Addition = $((a+b))"
echo "Subtraction = $((a-b))"
echo "Multiplication = $((a*b))"
echo "Division = $((a/b))"
echo "Remainder = $((a%b))"

# Example 3: Area of a Rectangle
echo "Enter length of rectangle:"
read length
echo "Enter width of rectangle:"
read width

echo "Area = $((length*width))"
# Example 4: Celsius to Fahrenheit

echo "Enter temperature in Celsius:"
read celsius

fahrenheit=$(echo "scale=2; ($celsius * 9/5) + 32" | bc)
echo "Temperature in Fahrenheit = $fahrenheit"


# if Linux not installed, use this website
# https://www.jdoodle.com/test-bash-shell-script-online