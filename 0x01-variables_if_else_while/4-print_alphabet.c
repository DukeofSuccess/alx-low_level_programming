#include <stdio.h>

/**
 * main - Prints alpha in lowercase with exception of q&e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
