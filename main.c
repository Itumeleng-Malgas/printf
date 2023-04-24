#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	char *str = NULL;
    _printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
	_printf("%%%%\n");

	_printf("%s\n", str);
	len = _printf("before %% %");

	printf("%d\n", len);
    return (0);
}
