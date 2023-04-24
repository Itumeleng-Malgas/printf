#ifndef MAIN_H
#define MAIN_H

/**
 * struct format_struct - This defines our key value map, so that for each key
 * (char format) we map it to the correct function to print.
 *
 * @format: format is the key we use to select the appropriate function.
 * @print_func: The function implemented to meet the specific requirement as
 * per the key.
 */

typedef struct format_struct
{
	char format;
	int (*print_func)(void *);
} format_t;

#include <stdarg.h>
int _printer(const char c, const format_t *format_map,int map_size,
		va_list args);
int _printf(const char *arg, ...);

/* helper functions */
int _putchar(char c);

int _printf_c(void *);
int _printf_s(void *);

#endif /* MAIN_H */
