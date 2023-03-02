#include "main.h"

/**
 *_puts - Prints a string to stdout
 *@str: pointer taken to string
 *Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
