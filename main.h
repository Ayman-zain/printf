#ifndef MAIN_GUARD
#define MAIN_GUARD

#include <stdarg.h>

int _putchar(char c);
int stringer(char *string);
int spec_handler(const char *spec, va_list arguments, int count);
int _printf(const char *format, ...);

#endif
