#include "main.h"

/**
 * _putint - put int
 * @arg: num
 * Return: char printed
 */

int _putint(void *arg)
{
	int res, num = *(int *)arg;
	char buf[32];

	res = sprintf(buf, "%d", num);

	return (write(1, buf, strlen(buf)));
}
