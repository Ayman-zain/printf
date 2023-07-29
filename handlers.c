#include <stdarg.h>
#include "main.h"

/**
 * spec_handler - Handles the different format specifiers
 * @spec: The format specifier to handle
 * @arguments: The va_list of arguments
 *
 * Return: The updated count after handling the specifier
*/

int spec_handler(const char *spec, va_list arguments)
{
	int count = 0;

	if (*spec == '%')
	{
		_putchar('%');
		count++;
	}
	else if (*spec == 'c')
	{
		char character = va_arg(arguments, int);

		_putchar(character);
		count++;
	}
	else if (*spec == 's')
	{
		char *str = va_arg(arguments, char*);

		count += stringer(str);
	}
	else if (*spec == 'd' || *spec == 'i')
	{
		int a = va_arg(arguments, int);

		count += print_int(a);
	}
	else if (*spec == 'b')
	{
		int a = va_arg(arguments, int);

		count += ToBinary(a);
	}
	else if (*spec == 'o')
	{
		int a = va_arg(arguments, int);

		count += to_octal(a);
	}
	else if (*spec == 'x')
	{
		int a = va_arg(arguments, int);

		count += print_x(a);
	}
	else if (*spec == 'X')
	{
		int a = va_arg(arguments, int);

		count += print_X(a);
	}
	else if (*spec == 'u')
	{
		unsigned int a = va_arg(arguments, unsigned int);

		count += print_u(a);
        }
	else
	{
		_putchar('%');
		_putchar(*spec);
		count += 2;
	}

return (count);
}
