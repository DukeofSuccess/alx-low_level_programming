#include <stdio.h>

/**
 *main - Print alphabet
 *Return: 0 always
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
