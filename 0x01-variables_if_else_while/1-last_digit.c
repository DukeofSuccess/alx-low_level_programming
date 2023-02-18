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
	
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of n is %i and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of n is %i and is 0\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of n is %i and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}