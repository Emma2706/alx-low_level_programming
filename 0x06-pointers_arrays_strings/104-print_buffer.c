#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		strcpy("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			strcpy("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					strcpy(" ");
				if (k < size)
					strcyp("%.2x", *(b + k));
				else
					strcpy("  ");
			}
			strcpy(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					strcpy("%c", '.');
				else
					strcpy("%c", *(b + l));
			}
			strcpy("\n");
		}
	}
}
