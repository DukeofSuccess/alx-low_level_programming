#include <stdio.h>

/**
 *main - Print 0-9 using putchar
 *Return: 0 always
 */

int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
		putchar('0' + nm);
	putchar('\n');
	return (0);
}
