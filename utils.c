#include "main.h"

/**
 * _putchar - print char to stdout
 *
 * @c: char to print
 * Return: 1 if success -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _is_specifier - check if char c is valid
 * @c: specifier.
 *
 * Return: if success 1 else 0.
 */
int _is_specifier(char c)
{
	char specs[] = {
		'c', 's', '%', 'd', 'i', 'u', 'o', 'x', 'X', 'r', 'R', 'b', 'S', 'p'
	};
	int i = 0;

	while (specs[i])
	{
		if (c == specs[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strlen - count the length of string
 *
 * @s: string.
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
