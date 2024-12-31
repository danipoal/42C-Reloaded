# Piscine Reloaded

## Summary
The Piscine was good but the time has passed. This series of exercises will help you revisit all the basics you’ve learned during the Piscine. Functions, loops, pointers, structures—let’s revisit together the syntactic and semantic bases of C.

**Version:** 1.2

---

## Contents

- [General Rules](#general-rules)
- [Exercise 00: Oh yeah, mooore...](#exercise-00-oh-yeah-mooore)
- [Exercise 01: Z](#exercise-01-z)
- [Exercise 02: clean](#exercise-02-clean)
- [Exercise 03: find_sh](#exercise-03-find_sh)
- [Exercise 04: MAC](#exercise-04-mac)
- [Exercise 05: Can you create it?](#exercise-05-can-you-create-it)
- [Exercise 06: ft_print_alphabet](#exercise-06-ft_print_alphabet)
- [Exercise 07: ft_print_numbers](#exercise-07-ft_print_numbers)
- [Exercise 08: ft_is_negative](#exercise-08-ft_is_negative)
- [Exercise 09: ft_ft](#exercise-09-ft_ft)
- [Exercise 10: ft_swap](#exercise-10-ft_swap)
- [Exercise 11: ft_div_mod](#exercise-11-ft_div_mod)
- [Exercise 12: ft_iterative_factorial](#exercise-12-ft_iterative_factorial)
- [Exercise 13: ft_recursive_factorial](#exercise-13-ft_recursive_factorial)
- [Exercise 14: ft_sqrt](#exercise-14-ft_sqrt)
- [Exercise 15: ft_putstr](#exercise-15-ft_putstr)
- [Exercise 16: ft_strlen](#exercise-16-ft_strlen)
- [Exercise 17: ft_strcmp](#exercise-17-ft_strcmp)
- [Exercise 18: ft_print_params](#exercise-18-ft_print_params)
- [Exercise 19: ft_sort_params](#exercise-19-ft_sort_params)
- [Exercise 20: ft_strdup](#exercise-20-ft_strdup)
- [Exercise 21: ft_range](#exercise-21-ft_range)
- [Exercise 22: ft_abs.h](#exercise-22-ft_abs-h)
- [Exercise 23: ft_point.h](#exercise-23-ft_point-h)
- [Exercise 24: Makefile](#exercise-24-makefile)
- [Exercise 25: ft_foreach](#exercise-25-ft_foreach)
- [Exercise 26: ft_count_if](#exercise-26-ft_count_if)
- [Exercise 27: display_file](#exercise-27-display_file)
- [Submission and Peer-Evaluation](#submission-and-peer-evaluation)

---

## General Rules

- Only the official page is your reference.
- Ensure correct permissions for files and directories.
- Follow proper turn-in procedures.
- All exercises will be graded by **Moulinette**, a strict and automated program.
- Shell exercises must be executable with `/bin/sh`.
- Submit only the specified files.
- Respect the **Norm**: your code must pass `norminette`.
- Forbidden functions are considered cheating.
- Submit `main()` only when asked.
- Compilation flags: `-Wall -Wextra -Werror`.
- If your program doesn’t compile, you’ll get a 0.

---

## Exercise 00: Oh yeah, mooore...
Create specific files and directories to match a given output structure. Use `tar -cf exo.tar *` to submit.

---

## Exercise 01: Z
Create a file `z` that returns "Z\n" when used with `cat`.

---

## Exercise 02: clean
Write a single command in `clean` to find and delete all files ending with `~` or wrapped with `#` in the current and subdirectories.

---

## Exercise 03: find_sh
Write a script that finds all files ending with `.sh` and displays their names without the extension.

---

## Exercise 04: MAC
Write a command to display your machine’s MAC addresses.

---

## Exercise 05: Can you create it?
Create a file containing only "42", and NOTHING else. Its name will be a specific sequence of characters.

---

## Exercise 06: ft_print_alphabet
Create a function that displays the alphabet in lowercase, on a single line, in ascending order.

---

## Exercise 07: ft_print_numbers
Create a function that displays all digits, on a single line, in ascending order.

---

## Exercise 08: ft_is_negative
Create a function that displays 'N' or 'P' depending on the integer's sign entered as a parameter.

---

## Exercise 09: ft_ft
Create a function that takes a pointer to int as a parameter and sets the value "42" to that int.

---

## Exercise 10: ft_swap
Create a function that swaps the value of two integers whose addresses are entered as parameters.

---

## Exercise 11: ft_div_mod
Create a function `ft_div_mod` that divides two integers and stores the quotient and remainder in respective pointers.

---

## Exercise 12: ft_iterative_factorial
Create an iterative function that returns the factorial of a number.

---

## Exercise 13: ft_recursive_factorial
Create a recursive function that returns the factorial of a number.

---

## Exercise 14: ft_sqrt
Create a function that returns the square root of a number (if it exists), or 0 if it’s irrational.

---

## Exercise 15: ft_putstr
Create a function that displays a string of characters on the standard output.

---

## Exercise 16: ft_strlen
Reproduce the behavior of the `strlen` function.

---

## Exercise 17: ft_strcmp
Reproduce the behavior of the `strcmp` function.

---

## Exercise 18: ft_print_params
Create a program that displays its given arguments.

---

## Exercise 19: ft_sort_params
Create a program that displays its given arguments sorted by ASCII order.

---

## Exercise 20: ft_strdup
**Turn-in directory:** `ex20/`
**Files to turn in:** `ft_strdup.c`
**Allowed functions:** `malloc`

Reproduce the behavior of the `strdup` function.

---

## Exercise 21: ft_range
**Turn-in directory:** `ex21/`
**Files to turn in:** `ft_range.c`
**Allowed functions:** `malloc`

Create a function `ft_range` that returns an array of integers containing all values between `min` (inclusive) and `max` (exclusive). If `min` is greater or equal to `max`, return a null pointer.

---

## Exercise 22: ft_abs.h
**Turn-in directory:** `ex22/`
**Files to turn in:** `ft_abs.h`
**Allowed functions:** None

Create a macro `ABS` which replaces its argument by its absolute value:

```c
#define ABS(Value)
```

---

## Exercise 23: ft_point.h
**Turn-in directory:** `ex23/`
**Files to turn in:** `ft_point.h`
**Allowed functions:** None

Create a header file `ft_point.h` that defines a `t_point` structure with `x` and `y` as integer fields. Write a function `set_point` to assign values to a `t_point`.

---

## Exercise 24: Makefile
**Turn-in directory:** `ex24/`
**Files to turn in:** `Makefile`
**Allowed functions:** None

Create a `Makefile` to compile `libft.a` using source files from the `srcs` directory and headers from the `includes` directory. Include rules for `clean`, `fclean`, `re`, and `all`.

---

## Exercise 25: ft_foreach
**Turn-in directory:** `ex25/`
**Files to turn in:** `ft_foreach.c`
**Allowed functions:** None

Create a function `ft_foreach` which applies a given function to all elements of an integer array.

---

## Exercise 26: ft_count_if
**Turn-in directory:** `ex26/`
**Files to turn in:** `ft_count_if.c`
**Allowed functions:** None

Create a function `ft_count_if` that counts elements in a string array that return `1` when passed to a given function.

---

## Exercise 27: display_file
**Turn-in directory:** `ex27/`
**Files to turn in:** `Makefile`, and required files
**Allowed functions:** `close`, `open`, `read`, `write`

Create a program `ft_display_file` to display the content of a file given as an argument. Handle errors for missing, multiple, or unreadable files with appropriate messages.

---

## Submission and Peer-Evaluation
Submit your assignments to your Git repository. Only the work inside your repository will be evaluated during defense. Double-check folder and file names for accuracy.
