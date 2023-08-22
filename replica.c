#include "main.h"

int _printf(const char *format, ...)
{
	char c;
	char *s;
	int count = 0, str_len;
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
					str_len = 0;
					
					while (s[str_len] != '\0')
						str_len++;
					write(1, s, str_len);
					count += str_len;
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
