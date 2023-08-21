#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>

int _printf(const char *format, ...)

int rep_format(char specifier, va_list list);

int _putchar(char c);

int print_strings(char *str, ...);

int _puthex(int n);

int _putint(int n);
#endif
