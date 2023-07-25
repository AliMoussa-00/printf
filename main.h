#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct specifiers - select specifier from format.
 *
 * @spec: a pointer to the specifier string.
 * @spec_func: pointer to the right function for the specifier.
 *
 * Description: group specifiers.
 */
typedef struct specifiers
{
	char *spec;
	int (*spec_func)(va_list);
} specifiers_t;

/** utils.c **/
int _putchar(char c);
int _is_specifier(char c);
int _strlen(char *s);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/** numbers.c **/
int print_digit(int n);
int print_int(va_list args);

/** print_unsigned.c **/
int get_unsign(unsigned int n);
int print_unsign(va_list args);

/** print_oct.c **/
int get_oct(unsigned int n);
int print_oct(va_list args);

/** print_hex_Hex.c **/
int get_Hex(unsigned int n);
int print_Hex(va_list args);
int get_hex(unsigned int n);
int print_hex(va_list args);

/** print_rev.c **/
int print_rev(va_list args);

int print_func(va_list args, char format);
int _printf(const char *format, ...);

#endif

