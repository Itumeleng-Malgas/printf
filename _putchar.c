#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: character to be printed
 */

int _putchar(char c)
{
	return write(1, &c, sizeof(c));
}
