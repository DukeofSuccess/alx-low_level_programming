#include <stdio.h>
#include "main.h"

/**
 *main - Print number of arguments
 *@argc: Number of arguments
 *@argv: Array of strings holding arguments
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
