#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printer(const char c, va_list args);
int _printf(const char *arg, ...);

/* helper functions */
int _putchars(void *arg);
int _vputchar(void *arg);
int _putint(void *arg);

int _putchar(char c);

#endif /* MAIN_H */
