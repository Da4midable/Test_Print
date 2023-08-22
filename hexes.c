#include "main.h"

/**
 * hex - converts integers to lowercase or uppercase hexadecimals
 * @n: the integer to be converted to lowercase
 * @isUppercase: integers to be converted to uppercase
 * Return: length + 2
 */
	
int hex(int n, int isUppercase)
{
	char buffer[20];
	int length = 0;
	int remainder;
	int i;

	if (n == 0)
	{
	if (isUppercase)
	{
	write(1, "0X", 2);
	}
	else
	{
	write(1, "0x", 2);
	}
	return (2);
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
	if (isUppercase)
	{
	buffer[length++] = remainder - 10 + 'A';
	}
	else
	{
	buffer[length++] = remainder - 10 + 'a';
	}
	}

	n /= 16;
	}

	for (i = length - 1; i >= 0; i--)
	{
	write(1, &buffer[i], 1);
	}

	return (length);
}
