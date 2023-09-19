#include "main.h"

/**
 * rev_string - Reserve a string
 * @s: String to be reserved
 * Return: Void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	for (i = 0; i < count / 2 ; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
