[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
# Recreation printf Function
<h1 align ="center">
<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="60%" width="50%">
</h1>

## Description
The **_printf()** function takes one argument:

A string with / without specifiers to print and gives the output formatted.

The string is printed character by character and when founds a '%' with a letter calls one of that parameters and print them instead the specifiers.

## Table of Content
- [Recreation printf Function](#recreation-printf-function)
  - [Description](#description)
  - [Table of Content](#table-of-content)
  - [Usage](#usage)
  - [Format Specifiers](#format-specifiers)
  - [Future Features](#future-features)
  - [Bugs](#bugs)
  - [Examples](#examples)
  - [Authors](#authors)
  - [License](#license)

## Usage

Like the according main.h library version:

```c
int _printf(const char *format, ...);
```

## Format Specifiers

Format generators are a format with which we tell the function to take the arguments ​​according to the indicated type.

A format specifier follows this prototype: `%type`
The following format specifiers are supported:

| Type   | Output |
|--------|--------|
| c      | Print a character passed as parameter |
| s      | Prints a string |
| %      | Print a percentage symbol |
| d      | Prints a signed decimal number |
| i      | Prints a signed number (int) |
| b      | Converts the unsigned integer to binary and prints it |
| r      | Print the inverted string |
| R      | Use ROT13 to converts the letters with the thirteenth letter forward of the alphabet. |

## Future Features

| Type   | Output |
|--------|--------|
| u      | Prints an unsigned decimal number |
| o      | Prints the octal unsigned integer conversion |
| x      | Unsigned hex conversion to lowercase |
| X      | Unsigned hex conversion to uppercase |
| p      | Print a memory address(pointer) |

## Bugs

- **%b** : The specifier %b doesn't work all correctly

## Examples

```c
#include "main.h"

int main (void)
{
    _printf ("I am a character %s", 'F');

    return (0);
}
```

**Output** : `I am a character F`


```c
#include "main.h"

int main (void)
{

    _printf ("%s", "STRING");

    return (0);
}
```
**Output** : `STRING`

```c
#include "main.h"

int main (void)
{

    _printf ("I am percentage %%");

    return (0);
}
```
**Output** : `I am a percentage %`

```c
#include "main.h"

int main (void)
{

    _printf ("I am an integer %i", 10);

    return (0);
}
```
**Output** : `I am an integer 10`

```c
#include "main.h"

int main (void)
{

    _printf ("I am a binary %b", 54);

    return (0);
}
```
**Output** : `I am a binary 110110`

## Authors
- **Diego Linares Castillo**. (diegojeanluck@hotmail.com)
- **Luis Manrique Chávez**. (luismanrique158158@gmail.com)

## License

[MIT](https://choosealicense.com/licenses/mit/)
