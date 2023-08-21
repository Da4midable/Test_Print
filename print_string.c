#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* print_strings - This function prints a string
* @str: string to be printed
* Return: count
*/

int print_string(char *str, ...)
{
	int count = 0;

	while (*str != '\0')
	{
		putchar(*str);
		count++;
		str++;
	}

	return (count);
}

