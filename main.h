#ifndef MAIN_GUARD
#define MAIN_GUARD

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include "functions.c"

int _putchar(char c);
int stringer(char *string);
int spec_handler(char spec, va_list arguments, int count);
int _printf(const char *format, ...);

#endif