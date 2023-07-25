
#include "main.h"
/**
 * print_rot13 - apply rotation by 13 to string
 * @args: argument to string
 * Return: number of bytes were printed.
 */
int print_rot13(va_list args)
{
	int i, j, len = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				len++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

