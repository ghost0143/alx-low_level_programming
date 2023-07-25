#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Find the length of the string */
	while (str[length])
	{
		length++;
	}

	/* Calculate the starting position for the second half */
	start = (length + 1) / 2;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
