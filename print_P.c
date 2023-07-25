#include "main.h"

/**
 * get_pointer_hex - print the address of a pointer
 * @n: pointer
 * Return: number of bytes were printed.
 */
int get_pointer_hex(unsigned long int n)
{
	unsigned long int k = n, r, a = 0;
	int len = 0;

	if (k / 16 != 0)
	{
		len += get_pointer_hex(n / 16);
	}

	r = k % 16;
	if (r > 9)
		a = 39;

	_putchar(r + a + '0');
	len++;
	return (len);
}

/**
 * print_P - print the address of a pointer
 * @args: argument of pointer
 * Return: number of bytes were printed.
 */
int print_P(va_list args)
{
	void *p = va_arg(args, void*);
	char *s = "(nil)";
	long int a;
	int i, len;

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	len = get_pointer_hex(a);
	return (len + 2);
}
