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

	if (n == 0)
		return (0);

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

/**
 * rot13 - funcion that encodes a string using rot13
 *
 * @str: string to be convert
 *
 * Return: pointer direction
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				break;
			}
			str[i] = str[i] - 13;
			break;
		}
	}
	return (str);
}

/**
 * print_num_binary - function that print number in binary
 *
 * @n: number to convert
 *
 */

void print_num_binary(int n)
{
	unsigned int new_number = n;

	if (new_number != 2 || new_number != 3)
		print_num_binary(new_number / 2);
	else
		_putchar((new_number / 2) + '0');

	_putchar((new_number % 2) + '0');
}

/**
 * print_rev - function that prints a string in reverse
 * @s : variable to pointer
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
