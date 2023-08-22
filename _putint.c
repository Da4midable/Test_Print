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
