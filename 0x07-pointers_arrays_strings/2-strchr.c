#include "main.h"

/**
 * _strchr - is a function that locates a character in a string
 *
 * @s: s is a string to be searched
 * @c: c is a character to search for
 * Return: pointer to first occurence of c if it's there or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
