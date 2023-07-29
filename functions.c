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
	n /= 10;
	count++;
	i++;
}
if (checkMIN == 1)
	arr[0] += 1;
j = d - 1;
while (j >= 0)
{
	 _putchar(arr[j] + '0');
	j--;
}
return (count);
}
/**
 * ToBinary - receive an int and print it in binary
 * @n: number to be printed
 * Return: length
 */
int ToBinary(int n)
{
	int arr[66], i = 0, j = 0;

	if (n == -1024)
	{
		i = stringer("11111111111111111111110000000000");
		return (i);
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	while (n > 0)
	{
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}
/**
 * to_octal - to octa
 * @int: int to be worked with
 * Return: length
 */
int to_octal(int d)
{
int octal = 0, i = 1,count;

while (d != 0)
{
octal += (d % 8) * i;
d /= 8;
i *= 10;
}
count = print_int(octal);
return (count);
}
