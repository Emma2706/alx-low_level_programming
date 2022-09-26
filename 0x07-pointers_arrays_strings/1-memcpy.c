#include "main.h"

/**
 * _memcpy - is a function that copies memory area
 *
 * @dest: dest is the copy destination
 * @src: src is the source buffer to copy characters from
 * @n: n is the number of bytes of memory to copy
 * Return: pointer to modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
