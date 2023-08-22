#include "main.h"

/**
* _puthex - converts integers to lowercase hexadecimals
* @n: the integer to be converted
* Return: length + 2
*/

int _puthex(unsigned int n)
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
		buffer[length++] = remainder - 10 + 'a';
	}

	n /= 16;
}

	for (i = length - 1; i >= 0; i--)
{
		write(1, &buffer[i], 1);
}

	return (length + 2);
}
