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
	

if (format == NULL)
		return (-1);

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
=======
		if (format[i] == '%')
		{
			count += rep_format(format[i + 1], list);
			i++;
		}
<<<<<<<< HEAD:_printf.c
		else
========

		if (i != (n - 1) && format != NULL)
>>>>>>>> 008f55e853e1c467041ec9f08f3d2979f2ad958f:testprint.c
		{
			count += _putchar(format[i]);
		}
		i++;
	}
<<<<<<<< HEAD:_printf.c
	va_end(list);
	return (count);
========
		_putchar('\0');
		va_end(list);
		return (count);
>>>>>>>> 008f55e853e1c467041ec9f08f3d2979f2ad958f:testprint.c
>>>>>>> 008f55e853e1c467041ec9f08f3d2979f2ad958f
}

