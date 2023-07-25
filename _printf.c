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
	int counter = 0;
	va_list arguments;
	/* first checks conditions */
	if (format == NULL)
		return (-1);

	va_start(arguments, format);
	while (format)
	{
		if (format == '%')
		{
			index++;
			count += spec_handler(*format, arguments, count);
			index++;
		}
		else
		{
			_putchar(format[index]);
			index++;
		}
	}
	va_end(arguments);
	return (count);
}
