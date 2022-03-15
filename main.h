#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct special_chars - Validate the special char (%?)
 *
 * @op: A char with some option
 *
 * @operation: Pointer to the function that go to print
 */

typedef struct special_chars
{
	int op;
	int (*operation)(va_list args);
} special_chars_t;

/**
 * struct print_operation - Contain and call the function to print
 *
 * @flag: A flag to validate if exist a special char (%?).
 *
 * @print: function to print something.
 */

typedef struct print_operation
{
	int flag;
	int (*print)(va_list args);
} print_operation_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *string);
int _strcmp(char *s1, char *s2);
int count_number(int n);
void print_number(int n);
print_operation_t choose_option(char s);
int print_num(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

int print_rot13(va_list args);
char *rot13(char *str);
int print_binary(va_list args);
void print_num_binary(int n);
void print_number(int n);
int print_str_rev(va_list args);

#endif