#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        /* Print a comma and a space after all elements except the last one */
        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}
