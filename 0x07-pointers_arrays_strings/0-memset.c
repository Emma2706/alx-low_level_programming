#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte
 *
 * @s: is pointer to string
 * @b: is character to be used for constant byte
 * @n: is an integer that shows the number of bytes
 * Return: pointer to modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
