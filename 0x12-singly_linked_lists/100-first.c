#include "lists.h"

/**
 *print_first - prints function before main executes
 *Return: void
 */

void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");

}
