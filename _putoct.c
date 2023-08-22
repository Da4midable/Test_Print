#include "main.h"

/**
* _putoct - converts integers to octal
* @n: the integer to be converted
* Return: length
*/

int _putoct(unsigned int n)
{
	char buffer[32];
	int length = 0;
	int i;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (n > 0)
	{
		buffer[length++] = n % 8 + '0';
		n /= 8;
	}

	for (i = length - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
	}

	return (length);
}
