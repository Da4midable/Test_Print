#include "main.h"

int _printf(const char *format, ...)
{
	char c;
	char *s;
	int count = 0;
	va_list output;

	if (format == NULL)
		return (-1);

	va_start(output, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					c = va_arg(output, int);
					count += putchar(c);
					break;
				case 's':
					s = va_arg(output, char *);
					count += puts(s);
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					break;
			}
		}
		else
			count += putchar(*format);
		format++;
	}
	va_end(output);
	return (count);
}
