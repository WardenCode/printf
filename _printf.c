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
 * _strcmp - Compare a string with another
 *
 * @s1: string.
 *
 * @s2: string.
 *
 * Return: Void
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}

/**
 * @brief 
 * 
 * @param s 
 * @return char(*)(char* a, void* b) 
 */

char (*choose_option(char *s))(char *a, void *b)
{
	special_chars_t options[] = {
		{"d", concat_num},
		{"c", concat_char},
		{"s", concat_str},
		{"i", concat_int},
		{NULL, NULL}
	};
	int i = 0;

	while (options[i].op)
	{
		if (_strcmp(options[i].op, s) == 0)
			return(options[i].operation);
		i++;
	}
	return (NULL);
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
	int size_initial = 0, i = 0, final_size = 0;
	char *str_formated = NULL;
	void *tmp = NULL;
	char (*p)(char *, void *);
	va_list args;

	size_initial = _strlen(format);

	str_formated = malloc(size_initial * sizeof(char));

	va_start(args, format);

	for(i = 0; i < size_initial; i++)
	{
		if (str_formated[i] == '%')
		{
			if (str_formated[i + 1] != '%')
			{
				p = choose_option(str_formated[i + 1]);
				if (p)
				{
					tmp = va_arg(args, void *);
					/*elige una opcion (c, s, d, i)*/
					p(str_formated, tmp);
				}
			}
			else
				continue;
		}
	}

	va_end(args);

	final_size = size_initial;
	fill_alloc(str_formated, format, size_initial);

	print_all(str_formated, size_initial);
	free(str_formated);
	return (final_size);
}
