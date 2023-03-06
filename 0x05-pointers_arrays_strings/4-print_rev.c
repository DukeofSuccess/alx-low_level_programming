#include "main.h"

/**
 * print_rev - Print string in reverse
 *@s: pointer taken to string
 *Return: nothing
 */

void print_rev(char *s)
{
	int stringy = 0;
	int A;

	while (*s != '\0')
	{
		stringy++;
		s++;

	}
	s--;
	for (A = stringy; A > 0; A--)
	{
		_putchar(*s);
		s--;

	}

	_putchar('\n');

}
