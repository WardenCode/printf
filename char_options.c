#include "main.h"

/**
 * print_num - Print a num;
 *
 * @arg: Num to print
 *
 * Return: The length of the num.
 */

int print_num(void *arg)
{
	int *argument = arg;
	int number = argument[0];
	int holder = 0;
	int count = 0;

	if (number < 0)
	{
		count++;
		number *= -1;
	}

	holder = number;

	while (number != 0)
	{
		number /= 10;
		count++;
	}
	write(1, &holder, count);
	return (1);
}

/**
 * print_char - Print a char
 *
 * @arg: Char to print
 *
 * Return: 1.
 */

int print_char(void *arg)
{
	write(1, &arg, 1);
	return (1);
}

/**
 * print_str - Print a string;
 *
 * @arg: The string to print
 *
 * Return: The length of an string
 */

int print_str(void *arg)
{
	char *argument = arg;
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
 * @arg: The int to print
 *
 * Return: The length of int
 */

int print_int(void *arg)
{
	int *argument = arg;
	int number = argument[0];
	int holder = 0;
	int count = 0;

	if (number < 0)
	{
		count++;
		number *= -1;
	}

	holder = number;

	while (number != 0)
	{
		number /= 10;
		count++;
	}
	write(1, &holder, count);
	return (1);
}

/**
 * print_percent- Print a percentaje symbol
 *
 * @arg: unused pointer
 *
 * Return: 0;
 */

int print_percent(void *arg __attribute__((unused)))
{
	_putchar('%');
	return (0);
}
