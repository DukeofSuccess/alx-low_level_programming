#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer
 *@b: the constant byte
 *@n: position in memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	while (n--) {
		*p++ = b;

	}
	return s;

}
