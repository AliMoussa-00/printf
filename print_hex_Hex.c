#include "main.h"
/**
 * get_Hex - print Hex number to stdout
 * @n: Hex number
 *
 * Return: number of bytes were printed.
 */
int get_Hex(unsigned int n)
{
	unsigned int k = n, r, a = 0;
	int len = 0;

	if (k / 16 != 0)
	{
		len += get_Hex(n / 16);
	}

	r = k % 16;
	if (r > 9)
		a = 7;

	_putchar(r + a + '0');
	len++;
	return (len);
}

/**
 * print_Hex - print Hex number from arg
 * @args: Hex argument
 *
 * Return: number of bytes were printed.
 */
int print_Hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	len = get_Hex(n);

	return (len);
}

/**
 * get_hex - print hex number to stdout
 * @n: hex number
 *
 * Return: number of bytes were printed.
 */
int get_hex(unsigned int n)
{
	unsigned int k = n, r, a = 0;
	int len = 0;

	if (k / 16 != 0)
	{
		len += get_hex(n / 16);
	}

	r = k % 16;
	if (r > 9)
		a = 39;

	_putchar(r + a + '0');
	len++;
	return (len);
}

/**
 * print_hex - print hex number from argument
 * @args: hex number
 *
 * Return: number of bytes were printed.
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	len = get_hex(n);

	return (len);
}
