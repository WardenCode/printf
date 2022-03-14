#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}

/**
 * count_number - Counts a number
 *
 * @n: integer to be printed
 *
 * Return: The size of the number less 1.
 */

int count_number(int n)
{
	int counter = 0;

	if (n < 0)
	{
		n *= -1;
		counter++;
	}

	while (n != 0)
	{
		n /= 10;
		counter++;
	}

	return (counter - 1);
}
