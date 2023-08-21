#include "main.h"

/**
* _printf - a skeleton version of printf
* @format: default string literal
* Return: count
*/

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i = 0;

	va_start(list, format);

	while (format[i] != '\0')
	{

		if (format[i] == '%')

		{
			count += rep_format(format[++i], list);
		}

		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}
		_putchar('\n');
		va_end(list);
		return (count);
}

