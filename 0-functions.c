#include "main.h"

/**
 * _printf_s - prints a string
 * @arg: string
 *
 * Return: number of printed characters
 */

int _printf_s(void *arg)
{
	char *str = *(char **)arg;
	int i = 0;

	if (!str)
		return (-1);

	while (*str != '\0')
	{
		_putchar(*str++);
		i++;
	}

	return (i);
}

/**
 * _printf_c - prints a character
 * @arg: a character to print.
 *
 * Return: number of character printed
 */

int _printf_c(void *arg)
{
	char c = *(char *)arg;

	_putchar(c);
	return (1);
}
