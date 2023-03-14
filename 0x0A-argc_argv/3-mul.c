#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - multiply 2 numbers and print result
 *@argc: Count of passed arguments
 *@argv: Array of strings of passed arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc < 3)

	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (argc > 2)
		{
			for (i = 1; i < argc; i++)
			{
				mul = atoi(argv[1]) * atoi(argv[2]);
			}
		}
	}
	printf("%d\n", mul);
	return (0);
}
