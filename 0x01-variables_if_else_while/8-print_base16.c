#include <stdio.h>

/**
 *main - Print hexadecis in lowercase
 *Return: 0 always
 */

int main(void)
{
	int n;
	char af;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (af = 'a'; af <= 'f'; af++)
	{
		putchar(af);
	}
	putchar('\n');
	return (0);
}
