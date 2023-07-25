#include "main.h"

/**
 * get_oct - prints unsiged octal
 * @n: num to print
 * Return: number of bytes printed
 */
int get_oct(unsigned int n)
{
	unsigned int k = n;
	int len = 0;

	if (k / 8 != 0)
	{
		len += get_oct(n / 8);
	}

	_putchar((k % 8) + '0');
	len++;
	return (len);
}

/**
 * print_oct - print octal
 * @args: argument to octal
 * Return: return number of bytes printed.
 */
int print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	len = get_oct(n);

	return (len);
}
