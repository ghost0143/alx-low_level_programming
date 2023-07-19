#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table is printed.
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				printf("%d", result);
			else
				printf(", %3d", result);
		}

		printf("\n");
	}
}
