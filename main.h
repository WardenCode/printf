#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *string);
void print_all(char *string, unsigned int size);

#endif