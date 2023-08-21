#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <limits.h>

int _printf(const char *format, ...);

int rep_format(char specifier, va_list list);

int _putchar(char c);

int print_string(char *str, ...);

int _puthex(int n);

int _putint(int n);
#endif
