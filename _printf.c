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

		return (size);
	}

	write(1, "You must to enter an string (NOT NULL)", 39);
	return (-1);
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
 * choose_option - Find if the flag match with an existence and
 * give the correct function.
 *
 * @s: Character to pass
 *
 * Return: A print_operation struct with a flag (0 or 1
 * and a function pointer or NULL.
 */

print_operation_t choose_option(char s)
{
	print_operation_t test = {0, NULL};
	special_chars_t options[] = {
		{'d', print_num},
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'%', print_percent},
		{'b', print_binary},
		{'R', print_rot13},
		{'r', print_str_rev},
		{'\0', NULL}
	};
	int i = 0;

	while (options[i].op)
	{
		if (options[i].op == s)
		{
			test.flag = 1;
			test.print = options[i].operation;
			return (test);
		}
		i++;
	}
	return (test);
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
	int i = 0, counter = 0, plus = 0;
	print_operation_t p = {0, NULL};
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	if (format[0] == '\0')
		return (0);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			p = choose_option(format[i + 1]);
			if (p.flag == 1)
			{
				plus = p.print(args);
				counter += plus + 1;
				i += 1;
				continue;
			}
		}
		_putchar(format[i]);
		counter++;
	}

	va_end(args);
	return (counter);
}
