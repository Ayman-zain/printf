#include "main.h"
/**
 * print_u - print an unsigned int
 * @n: the unsigned int
 * Return: length.
 */
int print_u(unsigned int n)
{
int count = 0, minC = 0, d = 0;
unsigned int g = n;
unsigned int arr[30];
int i, j;
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
if (minC == 1)
	arr[0]++;

j = d - 1;
	while (j >= 0)
	{
	_putchar(arr[j] + '0');
	j--;
}
return (count);
}
/**
 * print_X - print in hexa
 * @d: int to print
 * Return: length
 */
int print_X(int d)
{
int i = 1, j, temp, count = 0;
char h[100];
while (d != 0)
{
	temp = d % 16;
	if (temp < 10)
		temp = temp + 48;
	else
		temp = temp + 87;
	h[i++] = temp;
	d /= 16;
	}
for (j = i - 1; j > 0; j--)
{
	_putchar(h[j]);
	count++;
}
return (count);
}
/**
 * print_x - print hexa in lowercase
 * @d: int to convert
 * Return: length
 */
int print_x(int d)
{
int i = 1, j, temp, count = 0;
char h[100];

while (d != 0)
{
	temp = d % 16;
	if (temp < 10)
		temp = temp + 48;
	else
		temp = temp + 55;
	h[i++] = temp;
	d /= 16;
	}
for (j = i - 1; j > 0; j--)
{
	_putchar(h[j]);
	count++;
}
return (count);
}
