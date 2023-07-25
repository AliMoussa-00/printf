#include "main.h"

/**
 * _printf - print according to format
 * @format: format to print.
 *
 * Return: return number of bytes were printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += print_func(args, format[i + 1]);
			i++;
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

