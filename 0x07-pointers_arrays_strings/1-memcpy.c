#include "main.h"
/**
 *_memcpy - copies n bytes from one mem area to another
 *@dest: destination memory
 *@src: initial memory
 *@n: bytes
 *Return: copy of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (;r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
