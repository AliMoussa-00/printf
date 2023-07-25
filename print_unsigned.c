#include "main.h"

/**
 * get_unsign - prints unsiged integer
 * @n: num to print
 * Return: number of bytes printed
 */
int get_unsign(unsigned int n)
{
	unsigned int k = n;
	int len = 0;

	if (k / 10 != 0)
	{
		len += get_unsign(n / 10);
	}

	_putchar((k % 10) + '0');
	len++;
	return (len);
}

/**
 * print_unsign - prints unsigned integer
 * @args: argument to print
 * Return: number of bytes printed
 */
int print_unsign(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	len = get_unsign(n);

	return (len);
}
