#include <stdio.h>

/**
 * main - prints sizes of different types
 * Return: 0 if true, non zero otherwise
 */
int main(void)
{
	printf("Size of a char: %li", sizeof(char));
	printf("Size of an int: %li", sizeof(int));
	printf("Size of a long int: %li", sizeof(long int));
	printf("Size of a long long int: %li", sizeof(long long int));
	printf("Size of a float: %li", sizeof(float));
	return (0);
}
