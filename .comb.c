#include "main.h"
	
int main(void)
{


	int len;
	int len2;


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');


	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
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

#include <unistd.h>

/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
 * *
 * * Return: On success 1.
 * *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include "main.h"

/**
* _putint - prints integers
* @n: the integer to be printed
* Return: length + 2
*/

int _puthex(int n)
{
	char buffer[20];
	int length = 0;
	int remainder;
	int i;

	if (n == 0)
{
	write(1, "0", 1);
	return (1);
}
	while (n > 0)
{
	remainder = n % 16;
	if (remainder < 10)
	{
		buffer[length++] = remainder + '0';
	}

	else
	{
		buffer[length++] = remainder - 10 + 'A';
	}

	n /= 16;
}

	write(1, "0x", 2);
	for (i = length - 1; i >= 0; i--)
{
		write(1, &buffer[i], 1);
}

	return (length + 2);
}
#include "main.h"

/**
* _putint - prints integers
* @n: the integer to be printed
* Return: length
*/

int _putint(int n)
{
	char buffer[20];
	int length = 0;
	int i;

	if (n == 0)
{
	write(1, "0", 1);
	return (1);
}
	else if (n < 0)
{
	write(1, "-", 1);
	n = -n;
	length++;
}

	while (n > 0)
{
	buffer[length++] = n % 10 + '0';
	n /= 10;
}

	for (i = length - 1; i >= 0; i--)
{
	write(1, &buffer[i], 1);
}

	return (length);
}
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

	if (specifier == 'c')
		count += _putchar(va_arg(list, int));
	else if (specifier == 's')
	{	
		str = va_arg(list, char *);
		while (*str)
		count += _putchar(*str);
		str++;
	}
	else if (specifier == '%')
		count += _putchar('%');
	else
	{
		count += _putchar(specifier);
	}
	return (count);
}
