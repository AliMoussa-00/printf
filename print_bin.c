#include "main.h"

/**
 * print_bin - convert decimal to binary number.
 * @args: argument to number.
 * Return: number of bytes were printed.
 */
int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int a[32];
	int len = 0;
	int i = 0, j;

	while (n > 0)
	{
		a[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(a[j] + '0');
		len++;
	}
	return (len);
}
