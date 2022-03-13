#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @string: Pointer to a first letter of a string.
 *
 * Return: The length of an string
 */

int _strlen(const char *string)
{
	int size = 0;

	if (string)
	{
		while (string[size] != '\0')
			size++;

		return size;
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

void print_all(void *string, int size)
{
	if (string && size >= 0)
	{
		write(1, string, size);
		return;
	}

	write(1, "You must to enter an string (NOT NULL)", 39);
}

/**
 * fill_alloc - Fill a string previously allocated.
 *
 * @alloc_str: Pointer to the spaces allocated.
 *
 * @str_base: A string with the format wished.
 *
 * @size_fill: quantity to fill the allocated string.
 *
 * Return: Void
 */

void fill_alloc(char *alloc_str, const char *str_base, int size_fill)
{
	int i = 0;

	while (i < size_fill)
	{
		alloc_str[i] = str_base[i];
		i++;
	}
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
	int size_initial = 0, final_size = 0;
	char *string_formated = NULL;

	size_initial = _strlen(format);

	string_formated = malloc(size_initial * sizeof(char));
	final_size = size_initial;
	fill_alloc(string_formated, format, size_initial);

	print_all(string_formated, size_initial);
	free(string_formated);
	return (final_size);
}
