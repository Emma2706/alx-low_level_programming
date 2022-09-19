#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: this is the char input
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char l = s[0];

	while (l != '\0')
	{
		sum++;
		l = s[i++];
	}
	return (sum);
}

