#include "main.h"

/**
 *factorial - Returns ! of a number
 *@n: integer given
 *Return: zero
 */

int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}

	if (n == 0)
	{
		return (1);
	}

	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
