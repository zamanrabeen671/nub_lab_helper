# Bash Script Clarification

This document explains the Bash statements used in the scripts in this folder.

## 1. `chmod +x`

`chmod` means **change mode**. It changes the permissions of a file.

```bash
chmod +x script.sh
```

The `+x` adds execute permission to `script.sh`. After running this command,
the script can be started directly with:

```bash
./script.sh
```

Without execute permission, run the script through Bash instead:

```bash
bash script.sh
```

You usually need to run `chmod +x` only once, unless the file permissions are
changed later.

## 2. `echo`

`echo` prints text or a value to the terminal.

```bash
echo "Hello"
echo $result
echo "Sum = $answer"
```

Text is commonly placed inside double quotes. A variable inside double quotes
is replaced by its value. For example, if `answer=12`, then:

```bash
echo "Sum = $answer"
```

prints:

```text
Sum = 12
```

## 3. `read`

`read` receives input from the user and stores it in a variable.

```bash
echo "Enter a number:"
read n
```

The script displays the prompt, waits for the user to type a value, and stores
that value in `n`. The variable can then be used with `$n`:

```bash
echo "You entered $n"
```

The variable name does not use `$` when a value is assigned or read. Use `$`
when you want to access the value.

## 4. Arithmetic: `$((a+b))`

`$(( ... ))` is **arithmetic expansion** in Bash. It calculates a numerical
expression and replaces the expression with its result.

```bash
a=5
b=7
echo "Addition = $((a+b))"
```

This prints:

```text
Addition = 12
```

The same form supports common operators:

```bash
$((a+b))   # addition
$((a-b))   # subtraction
$((a*b))   # multiplication
$((a/b))   # integer division
$((a%b))   # remainder
```

Spaces are optional inside arithmetic expansion, so `$((a+b))` and
`$((a + b))` both work. Bash arithmetic with integer variables performs
integer division; for example, `5/2` results in `2`.

## 5. Even or odd condition

```bash
if [ $((n%2)) -eq 0 ]
then
	echo "$n is Even"
else
	echo "$n is Odd"
fi
```

This works as follows:

1. `n%2` calculates the remainder after dividing `n` by `2`.
2. An even number has a remainder of `0`.
3. `[ ... ]` tests a condition. In Bash, `[` is a command, so spaces are
   required after `[` and before `]`.
4. `-eq` means **equal to**.
5. If the condition is true, the commands between `then` and `else` run.
6. Otherwise, the commands between `else` and `fi` run.
7. `fi` ends the `if` statement. It is `if` written backwards.

For example, when `n=8`, `$((n%2))` is `0`, so the output is `8 is Even`.

## 6. C-style `for` loop

```bash
for ((i=1;i<=n;i++))
do
	echo $i
done
```

This loop prints the numbers from `1` through `n`.

The three parts inside `(( ... ))` are:

```text
i=1     Start with i equal to 1
i<=n    Continue while i is less than or equal to n
i++     Increase i by 1 after each repetition
```

`do` marks the beginning of the loop body, and `done` marks its end. For
`n=3`, the loop prints `1`, `2`, and `3`.

## 7. Functions

A function is a named group of commands that can be run whenever its name is
called.

```bash
add()
{
	result=$((5+7))
	echo $result
}
```

Here, `add` is the function name. The parentheses identify it as a function,
and the braces contain its commands. Defining a function does not run it; the
function runs when its name is used:

```bash
add
```

### Capturing function output

```bash
add()
{
	result=$((5+7))
	echo $result
}

answer=$(add)
echo "Sum = $answer"
```

`$(add)` is **command substitution**. It runs the `add` function and captures
what the function prints. That printed value is stored in `answer`.

The sequence is:

1. `add` calculates `5+7`.
2. `echo $result` prints `12`.
3. `answer=$(add)` captures `12` in `answer`.
4. `echo "Sum = $answer"` prints `Sum = 12`.

This is not the same as a traditional function return value. In Bash,
`return` normally supplies a status code from `0` to `255`; `echo` plus
`$(...)` is commonly used when a function needs to produce a result.

## 8. Finding the largest of three numbers

```bash
if [ $a -ge $b ] && [ $a -ge $c ]
then
	echo "$a is the largest"

elif [ $b -ge $a ] && [ $b -ge $c ]
then
	echo "$b is the largest"

else
	echo "$c is the largest"
fi
```

### First condition

```bash
[ $a -ge $b ] && [ $a -ge $c ]
```

`-ge` means **greater than or equal to**. The first test checks whether `a`
is at least as large as `b`. The second checks whether `a` is at least as
large as `c`.

`&&` means **AND**. Both tests must be true for the complete condition to be
true. Therefore, if `a` is greater than or equal to both other numbers, the
script prints:

```bash
echo "$a is the largest"
```

### `then`

`then` begins the commands that should run when the condition immediately
before it is true. It can be written on the next line, as in these scripts,
or after a semicolon:

```bash
if [ "$a" -ge "$b" ]; then
	echo "$a is larger"
fi
```

### `elif`

`elif` means **else if**. Bash checks this condition only when the first `if`
condition was false:

```bash
elif [ $b -ge $a ] && [ $b -ge $c ]
```

If `b` is greater than or equal to both `a` and `c`, the script prints that
`b` is the largest.

### `else`

`else` runs when none of the earlier conditions was true. In this example,
the remaining possibility is that `c` is the largest, so the script prints:

```bash
echo "$c is the largest"
```

### `fi`

`fi` closes the complete `if`/`elif`/`else` statement. Every Bash `if`
statement must end with `fi`.

### Numeric comparison operators

```text
-eq   equal to
-ne   not equal to
-gt   greater than
-ge   greater than or equal to
-lt   less than
-le   less than or equal to
```

For robust scripts, quote variables in test expressions:

```bash
if [ "$a" -ge "$b" ] && [ "$a" -ge "$c" ]
```

For this example, the user must enter valid integer values. Otherwise, a
numeric comparison may produce an error.
