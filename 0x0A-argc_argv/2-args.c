#include <stdio.h>
#include "main.h"

/**
 *main - Print all arguments received
 *@argc: Argument count
 *@argv: Array of strings of the arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
