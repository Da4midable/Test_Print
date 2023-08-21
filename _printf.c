#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* _printf - a skeleton version of printf
* @format: default string literal
* Return: count
*/

int _printf(const char *format, ...)
{
	va_list list;
	int count;

	va_start(list, format);

	while (*format != '\0')
	{

		if (*format == '%')

		{
			count += rep_format(format++, list);
		}

		else
		{
			count += _putchar(*format);
			format++;
		}
	}
		_putchar('\n');
		va_end(list);
		return (count);
}

