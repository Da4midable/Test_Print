#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* rep_format - This replaces specifiers with corresponding data type
* @specifier: characters to be checked to execute conditionals
* @list: Name of the variable for va_list function declaration
* Return: void
*/

int rep_format(char specifier, va_list list)
{
	int count = 0;

	if (specifier == 'c')
		count += _putchar(va_arg(list, int);
	else if (specifier == 's')
		count += _putchar(va_arg(list, char *));
	else if (specifier == '%')
		count += _putchar('%');
	else
	count += _putchar(specifier);
	return (count);
}
