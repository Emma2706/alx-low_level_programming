#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring
 *
 * @s: is the string to work on
 * @accept: pattern to match against
 * Return: unsigned int to how many initial bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, len = 0, match = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				len++;
				break;
			}
		}
		if (len != 0)
			match++;
		if (match != len)
			return (len);
	}
	return (0);
}
