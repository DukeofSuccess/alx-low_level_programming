#include "main.h"

/**
 *_pow_recursion - x raised to the power y
 *@x: base integer
 *@y: exponent integer
 *Return: zero
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
