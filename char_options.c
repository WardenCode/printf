#include "main.h"

/**
 * print_num - Print a num;
 *
 * @args: va_list like argument
 *
 * Return: The length of the num.
 */

int print_num(va_list args)
{
	int num = va_arg(args, int);
	int counter = 0;

	counter = count_number(num);
	print_number(num);
	return (counter);
}

/**
 * print_char - Print a char
 *
 * @args: va_list like argument
 *
 * Return: 1.
 */

int print_char(va_list args)
{
	char character = va_arg(args, int);

	write(1, &character, 1);
	return (0);
}

/**
 * print_str - Print a string;
 *
 * @args: va_list like argument
 *
 * Return: The length of an string
 */

int print_str(va_list args)
{
	char *argument = va_arg(args, char *);
	int i = 0;

	while (argument[i])
	{
		_putchar(argument[i]);
		i++;
	}
	return (i - 1);
}

/**
 * print_int - Print a int
 *
 * @args: va_list like argument
 *
 * Return: The length of int
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int counter = 0;

	counter = count_number(num);
	print_number(num);
	return (counter);
}

/**
 * print_percent- Print a percentage symbol
 *
 * @args: va_list like argument
 *
 * Return: 0;
 */

int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (0);
}
