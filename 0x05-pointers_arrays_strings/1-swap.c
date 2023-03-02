#include "main.h"

/**
 *swap_int - swaps values of 2 ints
 *@a: 1st int
 *@b: 2nd int
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int val_a = *a;
	*a = *b;
	*b = val_a;

}
