#include "main.h"
/**
 * print_rev - this characters in reverse
 * @s: this is a parameter to change
 */
void print_rev(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	l--;
	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}
	_putchar('\n');
}
