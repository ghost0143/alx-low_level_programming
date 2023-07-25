#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int i, j;

	/* Find the length of the string */
	while (s[length])
	{
		length++;
	}

	/* Swap characters from the start and end of the string */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
