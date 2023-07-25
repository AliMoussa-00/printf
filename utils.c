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

