#include <stdarg.h>
#include "main.h"

/**
 * _printer - used to call appropriate print function given the identifier.
 * @c: next char in string
 * @args: va_list
 *
 * Return: number of characters printed
 */

int _printer(const char c, va_list args)
{
	int total = 0;

	if (c == '%')
		total += _putchar('%');
	else if (c == 's')
	{
		void *arg = va_arg(args, void *);

		total += _putchars(&arg);
	}
	else if (c == 'd' || c == 'i')
	{
		void *arg = va_arg(args, void *);

		total += _putint(&arg);
	}
	else if (c == 'c')
	{
		void *arg = va_arg(args, void *);

		total += _vputchar(&arg);
	}
	else if (c == 'b')
	{
		void *arg = va_arg(args, void *);

		total += _putbinary(&arg);
	}
	else
	{
		total += _putchar('%');
		total += _putchar(c);
	}

	return (total);
}
