#include "main.h"

/**
 * print_binary - Print a num in binary.
 *
 * @args: va_list like argument
 *
 * Return: The length of the num.
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int), counter = 0;
	int holder = num;

	if (holder < 0)
	{
		_putchar('0');
		return (counter);
	}

	print_num_binary(num, &counter);
	return (counter);
}

/**
 * print_rot13 - Print a string;
 *
 * @args: va_list like argument
 *
 * Return: The length of an string
 */

int print_rot13(va_list args)
{
	char *argument = va_arg(args, char *);
	char *p = NULL;
	int i = 0, j = 0;

	if (argument == NULL)
	{
		write(1, "(null)", 6);
		return (5);
	}

	while (argument[i])
		i++;

	p = malloc(sizeof(char) * i);
	if (!p)
	{
		_printf("malloc failed");
		exit(100);
	}

	for (i = 0; argument[i]; i++)
		p[i] = argument[i];

	p = rot13(p);

	while (p[j])
	{
		_putchar(p[j]);
		j++;
	}
	free(p);

	return (j - 1);
}

/**
 * print_str_rev - Print a string in reverse;
 *
 * @args: va_list like argument
 *
 * Return: The length of an string
 */

int print_str_rev(va_list args)
{
	char *argument = va_arg(args, char *);
	int i = 0, counter = 0;

	if (argument == NULL)
	{
		write(1, "(null)", 6);
		return (5);
	}

	while (argument[i])
		i++;

	counter = i - 1;
	print_rev(argument);

	return (counter);
}
