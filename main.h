#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef struct special_chars
{
    char *op;
    void (*operation)(char *string, void *argument);
} special_chars_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *string);
void print_all(void *string, int size);
void fill_alloc(char *alloc_str, const char *str_base, int size_fill);

#endif
