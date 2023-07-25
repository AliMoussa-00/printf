#include "main.h"

/**
 * print_digit - function to print number to stdout.
 * @n: integer to print.
 *
 * Return: number of bytes were printed.
 */
int print_digit(int n)
{
	unsigned int k = n;
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		k = n;
		len++;
	}

	if (k / 10 != 0)
	{
		len += print_digit(n / 10);
	}

	_putchar((k % 10) + '0');
	len++;
	return (len);
}

/**
 * print_int - print integer from argument.
 * @args: argument to int.
 *
 * Return: number of bytes were printed.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;

	len = print_digit(n);

	return (len);
}

