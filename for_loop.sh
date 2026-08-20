#!/bin/bash
for i in {1..10}
do
    echo $i
done

#---------Print even numbers------------
#!/bin/bash
for i in {2..20..2}
do
    echo $i
done

#---------Print number from 1 to n-----------------
#!/bin/bash

echo "Enter a number:"
read n

for ((i=1;i<=n;i++))
do
    echo $i
done

#---------sum of n numbers-----------------
#!/bin/bash

echo "Enter N:"
read n

sum=0

for ((i=1;i<=n;i++))
do
    sum=$((sum+i))
done

echo "Sum = $sum"