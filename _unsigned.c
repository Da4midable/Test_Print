#include "main.h"

/**
* _unsigned - prints unsigned integers
* @n: the unsigned integer to be printed
* Return: length
*/

int _unsigned(unsigned int n)
{
	char buffer[20];
	int length = 0;
	int i;

	if (n == 0)
{
	write(1, "0", 1);
	return (1);
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
