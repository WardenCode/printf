#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef struct special_chars
{
    int op;
    int (*operation)(void *arg);
} special_chars_t;

typedef struct print_operation
{
    int flag;
    int (*print)(void *arg);
} print_operation_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *string);
int _strcmp(char *s1, char *s2);
print_operation_t choose_option(char s);
int print_num(void *arg);
int print_char(void *arg);
int print_str(void *arg);
int print_int(void *arg);
int print_percent(void *arg);

#endif