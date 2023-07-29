#ifndef MAIN_GUARD
#define MAIN_GUARD

#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int stringer(char *string);
int spec_handler(const char *spec, va_list arguments);
int _printf(const char *format, ...);
int print_int(int n);
int ToBinary(int n);
int to_octal(int d);
int print_u(unsigned int a);
int print_x(int a);
int print_X(int a);

#endif
