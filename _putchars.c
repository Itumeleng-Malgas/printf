#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _putchars - prints characters to stdout
 * @arg: pointer to any type
 * Return: number of chars printed
 */

int _putchars(void *arg)
{
	/* convert to string */
	char *str = *(char **)arg;

	if (!str)
		str = "(null)";

	return (write(1, str, strlen(str)));
}
