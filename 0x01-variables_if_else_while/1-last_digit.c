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
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	if (last_dig > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_dig);
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}
