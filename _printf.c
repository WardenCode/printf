#include "main.h"

/**
 * _printf - Produce output according to a format as described below.
 *
 * @format: A string with the format wished.
 *
 * Return: The length of the final string with the format
 */

int _printf(const char *format, ...)
{
	int size_initial = 0, j = 0, final_size = 0;
	char *string_formated = NULL;

	size_initial = _strlen(format);

	string_formated = malloc(i * sizeof(char));
	final_size = size_initial;
    fill_malloc(string_formated, format, size_initial);

	print_all(string_formated, size_initial);
	free(string_formated);
	return (final_size);
}