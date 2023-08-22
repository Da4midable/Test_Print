#include "main.h"
/**
* _printf - a skeleton version of printf
* @format: default string literal
* Return: count
*/

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int count = 0, i = 0;
	const unsigned int n = strlen(format);
	

	va_start(list, format);

	while (i < n)
	{

		if (format[i] == '%')

		{
			count += rep_format(format[++i], list);
			++i;
		}

		if (i != (n - 1) && format != NULL)
		{
			count += _putchar(format[i]);
		}

		i++;
	}
		_putchar('\0');
		va_end(list);
		return (count);
}

