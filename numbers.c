#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int new_number = 0;

	if (n == -2147483648)
	{
		new_number = n;
		_putchar('-');
		new_number = -new_number;

		if (new_number / 10)
			print_number(new_number / 10);
		_putchar('0' + (new_number % 10));
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
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
