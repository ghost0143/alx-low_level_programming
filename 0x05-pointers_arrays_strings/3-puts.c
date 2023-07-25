#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	char c;
	while ((c = *str++))
	{
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
