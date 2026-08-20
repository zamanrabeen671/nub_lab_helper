#!/bin/bash
hello()
{
    echo "Hello Students"
    echo "Welcome to OS Lab"
}
hello

##------------Function with return value
#!/bin/bash
add()
{
    result=$((5+7))
    echo $result
}
answer=$(add)
echo "Sum = $answer"

#----------------Function with arguments
#!/bin/bash

add()
{
    sum=$(($1+$2))
    echo "Sum = $sum"
}

echo "Enter first number:"
read a

echo "Enter second number:"
read b

add $a $b