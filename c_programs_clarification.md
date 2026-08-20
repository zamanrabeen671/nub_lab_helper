# C Programs Clarification

This guide explains the six C programs in this folder and shows how to build and run each one.

## Before you start

Make sure GCC is installed and available in Git Bash or your terminal:

```bash
gcc --version
```

The general build format is:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic source_file.c -o output_name
```

- `gcc` compiles the C program.
- `-std=c11` uses the C11 language standard.
- `-Wall -Wextra -Wpedantic` enables useful compiler warnings.
- `source_file.c` is the C source file.
- `-o output_name` chooses the name of the generated executable.

Each program has its own `main()` function, so build them separately.

## 1. Print a string

File: `lab_1_print_a_string.c`

This program stores `Compiler Design` in a character array and prints each
character using a loop.

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab_1_print_a_string.c -o print_string.exe
```

### Run in Git Bash

```bash
./print_string.exe
```

### Expected output

```text
String elements: Compiler Design
```

## 2. Count the length of a string

File: `lab1_2_Count_length_from_a_string.c`

This program visits each character until it reaches the null terminator
(`\\0`) and counts the characters. The null terminator is not included in the
length.

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab1_2_Count_length_from_a_string.c -o count_length.exe
```

### Run in Git Bash

```bash
./count_length.exe
```

### Expected output

```text
Length of the string = 11
```

## 3. Count words in a string

File: `lab1_3_Count_words_from_String.c`

This program counts words by detecting the beginning of each group of
non-whitespace characters. It handles spaces, tabs, and newlines as separators.

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab1_3_Count_words_from_String.c -o count_words.exe
```

### Run in Git Bash

```bash
./count_words.exe
```

### Expected output

```text
Total number of words = 5
```

## 4. Count whitespace characters

File: `lab1_4_Count_white_space_from_String.c`

This program counts spaces, tabs, and newline characters in the string.

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab1_4_Count_white_space_from_String.c -o count_whitespace.exe
```

### Run in Git Bash

```bash
./count_whitespace.exe
```

### Expected output

```text
Total white spaces = 3
```

## 5. Remove whitespace from a string

File: `lab1_5_Remove_white_space_from_String.c`

This program copies every non-whitespace character from `str` into `result`.
After copying, it adds `\\0` so that `result` becomes a valid C string.

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab1_5_Remove_white_space_from_String.c -o remove_whitespace.exe
```

### Run in Git Bash

```bash
./remove_whitespace.exe
```

### Expected output

```text
String after removing spaces: ABCD
```

## 6. Simple lexical analyzer

File: `simple_lexical_analyzer.c`

This program analyzes the sample input `int x = 10 + y;` and identifies:

- `int` as a keyword
- `x` and `y` as identifiers
- `10` as an integer
- `=` and `+` as operators
- `;` as a delimiter

### Build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic simple_lexical_analyzer.c -o lexical_analyzer.exe
```

### Run in Git Bash

```bash
./lexical_analyzer.exe
```

### Expected output

```text
Analyzing input string: int x = 10 + y;

Token           Type
-------------------------
int             Keyword
x               Identifier
=               Operator
10              Integer
+               Operator
y               Identifier
;               Delimiter
```

## Running from Windows Command Prompt or PowerShell

When the executable was built with the `.exe` extension, use its name directly:

```text
print_string.exe
count_length.exe
count_words.exe
count_whitespace.exe
remove_whitespace.exe
lexical_analyzer.exe
```

In PowerShell, prefix a program in the current directory with `./`:

```powershell
./print_string.exe
```

## Rebuilding after changes

After editing a `.c` file, run its build command again. If GCC reports warnings
or errors, fix those messages before running the executable. A successful
compilation produces no error messages and creates the executable named after
`-o`.
