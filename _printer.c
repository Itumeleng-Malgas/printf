#include <stdarg.h>
#include "main.h"

/**
 * _printer - used to call appropriate print function given the identifier.
 * @c: next char in string
 * @format_map: an array of format_t struct
 * @map_size: size of format_map array
 * @args: va_list
 *
 * Return: number of characters printed
 */

int _printer(const char c, const format_t *format_map, int map_size,
		va_list args)
{
	int j, total = 0;

	if (c == '%')
		return (_putchar('%'));

	if (c == 's' || c == 'c')
	{
		for (j = 0; j < map_size; j++)
		{
			if (format_map[j].format == c)
			{
				void *arg = va_arg(args, void *);

				total += format_map[j].print_func(&arg);
				break;
			}
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
