#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);

int rep_format(char specifier, va_list list);

int _putchar(char c);

int print_string(char *str);

int hex(int n, int isUppercase);

int _putint(int n);

int _putbin(unsigned int n);

int _puthex(unsigned int n);

int _putHex(unsigned int n);

int _putoct(unsigned int n);

int _unint(unsigned int n);

char *_itoa(int value, char *buffer, int radix);

#endif
