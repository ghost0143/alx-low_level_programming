#include <stdio.h>
#include "main.h"

/**
 * @a: The array of integers.i
 * print_array Prints n elements array integers, followed by a new line.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
