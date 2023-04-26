#include "main.h"

/**
 * _putbinary - puts num in binary
 * @arg: num
 * Return: n char printed
 */

int _putbinary(void *arg)
{
	int num = *(unsigned int *)arg;
	int size = sizeof(unsigned int) * 8;
	char buffer[size + 1];

	for (int i = size - 1; i >= 0; i--)
	{
		buffer[size - i - 1] = ((num >> i) & 1) + '0';
	}

	buffer[size] = '\0';
	write(1, buffer, size);
	return (size);
}
