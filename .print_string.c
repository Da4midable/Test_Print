#include "main.h"

/**
* print_strings - This function prints a string
* @str: string to be printed
* Return: count
*/

int print_string(char *str)
{
	int count = 0, i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}

	return (count);
}

