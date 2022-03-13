#include "main.h"

/**
 * _printf - Produce output according to a format as described below.
 *
 * @format: A string with the format wished.
 *
 * Return: The length of the final string with the format
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, final_size = 0;
	char *string_formated = NULL;

	/*Count the size of the format*/
	for (i = 0; format[i] != '\0'; i++)
		continue;

	/*create the space to the formated string*/
	string_formated = malloc(i * sizeof(char));
	final_size = i;

	while(j < i)
	{
		string_formated[j] = format[j];
		j++;
	}

	string_formated[i] = '\0';

	write(1, string_formated, final_size);

	/*print_all(string_formated);*/
	free(string_formated);
	return (final_size);
}
