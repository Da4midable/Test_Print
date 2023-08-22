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
	char *str;

	if (specifier == '\0')
		return (0);
	if (specifier == 'c')
		count += _putchar(va_arg(list, int));
	else if (specifier == 's')
	{
		str = va_arg(list, char *);

		while (*str)
		{
			count += _putchar(*str);
			str++;
		}
		count += _putchar('\0');
	}
	else if (specifier == 'd' || specifier == 'i')
			count += _putint(va_arg(list, int));
	else if (specifier == '%')
		count += _putchar('%');
	else
		count += _putchar(specifier);
	return (count);
}
