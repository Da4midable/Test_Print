#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* print_strings - This prints replaces %s with a string
* @mainstr: default pointer that takes input
* Return: void
*/

void print_strings(const char *mainstr, ...)
{
	va_list list;
	unsigned int i, j;
	char *str;

	va_start(list, mainstr);

	i = 0;

	while (mainstr[i])
	{

	if (mainstr[i] == '%' && mainstr[i + 1] == 's' && mainstr[i - 1] != 92)

	{
		str = va_arg(list, char *);

	for (j = 0; str[j] != '\0'; j++)
	{
		putchar(str[j]);
	}
		i += 1;
	}

	else
	{
		putchar(mainstr[i]);
	}
		i++;
	}

		putchar('\n');
		va_end(list);
}

