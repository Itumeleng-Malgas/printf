#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: character to be printed
 * Return: nbytes printed
 */

int _putchar(char c)
{
	return (write(1, &c, sizeof(c)));
}

/**
 * _vputchar - putchar
 * @arg: char
 * Return: n char printed
 */

int _vputchar(void *arg)
{
	char ch = *(char *)arg;

	return (write(1, &ch, 1));
}
