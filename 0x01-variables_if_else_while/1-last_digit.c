#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 *main - Print whether last string is <,=,> than zero
 *Return: always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
	{
		printf("Last digit of n is %i and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %i and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %i and is less than 6 and not 0\n", n);
	}
	return (0);
}
