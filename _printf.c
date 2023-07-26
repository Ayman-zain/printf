#include <stddef.h>
#include "main.h"

/**
 * _printf - stdio fuunction that prints characters
 * @format: the string of characters and/or specifiers to work with
 * @...: arguments givent to use in formating
 *
 * Return: string lenght
 */

int _printf(const char *format, ...)
{
	int count = 0, index = 0;
	va_list arguments;
	/* first checks conditions */
	if (format == NULL)
		return (-1);

	va_start(arguments, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			count = spec_handler(&format[index], arguments);
			index++;
		}
		else
		{
			_putchar(format[index]);
			index++;
			count++;
		}
	}
	va_end(arguments);
	return (count);
}
