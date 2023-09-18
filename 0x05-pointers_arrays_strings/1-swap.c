#include "main.h"

/**
 * Swap_in - Swap two integers
 * @a = value 1
 * @b = value 2
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
