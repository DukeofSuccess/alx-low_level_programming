#include "main.h"

/**
 *_sqrt_recursion - Returns natural square of an int
 *@n: given integer
 *Return: zero
 */

int findsqrt_recursion(int n, int s);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (findsqrt_recursion(n, 0));
	return (0);
}

int findsqrt_recursion(int n, int _sqrt)
{
	if ( _sqrt * _sqrt > n)
	{
		return (-1);
	}

	if (_sqrt * _sqrt == n)
	{
		return (_sqrt);
	}
	return (findsqrt_recursion(n, _sqrt + 1));
}
