#include "main.h"

/**
 * print_char - print single character.
 *
 * @args: char to print
 * Return: 1 if success -1 else.
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return (_putchar(c));
}
