#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * stringer - handles strings
 * @string: a string
 * Return: number of printed characters
*/
int stringer(char *string)
{
	int index = 0;

	if (string == NULL)
	{
	return (stringer("(null)"));
	}
	while (string[index])
	{
		_putchar(string[index]);
		index++;
	}
	return (index);
}

/**
 * spec_handler - Handles the different format specifiers
 * @spec: The format specifier to handle
 * @arguments: The va_list of arguments
 * @count: The current count of characters printed
 * Return: The updated count after handling the specifier
*/
int spec_handler(char spec, va_list arguments, int count)
{
	switch (spec)
	{
		case '%':
		{
			_putchar('%');
			count++;
			break;
		case 'c':
		{
			char character = va_arg(arguments, int);

			_putchar(character);
			count++;
			break;
		}
		case 's':
		{
			char str = va_arg(arguments, int);

			stringer(&str);
			count++;
			break;
		}
		default:
		{
			_putchar('%');
			_putchar(spec);
			count += 2;
			break;
		}
	}
	return (count);
}
