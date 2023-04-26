#include "main.h"

/**
 * _putbinary - puts num in binary
 * @arg: num
 * Return: n char printed
 */

int _putbinary(void *arg)
{
	int num = *(int *)arg;
	int binary[sizeof(int) * 8];
	int temp, j, i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	temp = i;
	for (j = temp - 1; j >= 0; j--)
	{
		_putchar(48 + binary[j]);
	}

	return (i);
}
