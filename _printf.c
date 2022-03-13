#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @string: Pointer to a first letter of a string.
 *
 * Return: The length of an string
 */

int _strlen(char *string)
{
	int size = 0;
	if (string)
	{
		while (string[size] != '\0')
		size++;

		return (size);
	}

	write(1, "You must to enter an string (NOT NULL)", 39);
	return (-1);
}

/**
 * print_all - Print into the standard output an string
 *
 * @string: pointer to the first letter of a string
 *
 * @size: Size of the string (count the null space)
 *
 * Return: Void
 */

void print_all(char *string, unsigned int size)
{
	if (string && size >= 0)
		write(1, string, (size - 1));

	write(1, "You must to enter an string (NOT NULL)", 39);
}

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