#include <stdarg.h>
#include "main.h"

/**
 * _printf - replica of std printf
 * @format: identifier string.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0,  result;

	/* handle format undefined case */
	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			result += _printer(format[i], args);
			i++;
		}
		else
		{
			result += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);

	return (result);
}
