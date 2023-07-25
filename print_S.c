#include "main.h"

/**
 * print_S - print Non printable characters
 * @args: argument to string
 * Return: return number of bytes were printed
 */
int print_S(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len = 0;
	int n;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			n = s[i];
			if (n < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + get_Hex(n);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
