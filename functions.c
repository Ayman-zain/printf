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
 * print_int - print an int;
 * @n: the int.
 * Return: lenth of the int
 */
int print_int(int n)
{
int count = 0, d = 0, g = n, arr[15], i, j;
int checkMIN = 0;
if (n < 0)
	{
	_putchar('-');
	if (n == INT_MIN)
	{
	n = (n + 1) * -1;
	checkMIN = 1;
	}
	else
	{
	n = -n;
	}
	count++;
	}
do {
	g /= 10;
	++d;
} while (g != 0);
i = 0;
while (i < d)
{
	arr[i] = n % 10;
	if (checkMIN == 1)
		arr[0] += 1;
	n /= 10;
	count++;
	i++;
}
j = d - 1;
while (j >= 0)
{
	 _putchar(arr[j] + '0');
	j--;
}
return (count);
}
