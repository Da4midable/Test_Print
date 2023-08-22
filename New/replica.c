#include "main.h"

int _printf(const char *format, ...)
{
	char c;
	char *s;
	int count = 0;
	unsigned int d;
	va_list output;

	if (format == NULL)
		return (-1);

	va_start(output, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
					c = va_arg(output, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					s = va_arg(output, char *);
					write(1, s, strlen(s));
					count++;
					break;
				case 'd':
					d = va_arg(output, unsigned int);
					write(1, &d, sizeof(d));
					count++;
					break;
				case '%':
					write(1, format, 1);
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(output);
	return (count);
}
