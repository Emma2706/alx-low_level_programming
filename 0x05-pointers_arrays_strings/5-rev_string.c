#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	int i, j, k, emma;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		emma = s[k];
		s[k] = s[j];
		s[j] = emma;
		k++;
		j--;
	}
}
