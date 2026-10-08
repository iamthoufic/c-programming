# C Programming

My notes and practice programs from learning C, organized by topic.

| Folder | Topics |
| --- | --- |
| [01-basics](01-basics) | Hello world, comments, escape sequences, identifier naming rules |
| [02-variables-and-data-types](02-variables-and-data-types) | Variables, constants, `char` / `float` / `double` / `bool`, `sizeof`, type conversion |
| [03-input-output](03-input-output) | `printf`, `scanf`, reading user input |
| [04-operators](04-operators) | Arithmetic, assignment, comparison, logical, increment/decrement, ternary |
| [05-conditionals](05-conditionals) | `if` / `else if` / `else`, nested conditions, `switch`, leap year, vowel/consonant |
| [06-loops](06-loops) | `for`, `while`, `do-while`, nested loops, star patterns, `break` / `continue` |
| [07-practice-problems](07-practice-problems) | Factorial, counting digits, sum of digits, reversing a number, palindromes |

Files named `try-it-out-*` are small exercises; `*-practice` files are practice problems.

## Running a program

Each `.c` file is a standalone program with its own `main()`. With GCC installed:

```bash
gcc 06-loops/for-loop.c -o build/for-loop
./build/for-loop
```

Compiled output goes in `build/`, which is ignored by git.
