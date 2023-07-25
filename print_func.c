#include "main.h"

/**
 * print_func - select the right function to print format
 *
 * @args: va_list arguments
 * @format: the format that contains the specifier.
 *
 * Return: the number of bytes were printed
 */

int print_func(va_list args, char format)
{
	specifiers_t sp[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsign},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_Hex},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	int i, len = 0;

	i = 0;
	while (sp[i].spec)
	{
		if (format == sp[i].spec[0])
		{
			return (sp[i].spec_func(args));
		}
		i++;
	}

	/** if non above then print it as it is **/
	len = _putchar(format);

	return (len);
}

