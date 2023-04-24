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
		return (_putchar('%'));

	if (c == 's' || c == 'c')
	{
		if (c != 'c')
		{
			void *arg = va_arg(args, void *);

			total += _putchars(&arg);
		}
		else
		{
			char ch = va_arg(args, int);

			total += _putchar(ch);
		}
	}
	else
	{
		total += _putchar('%');
		total += _putchar(c);
		return (total);
	}

	return (total);
}
