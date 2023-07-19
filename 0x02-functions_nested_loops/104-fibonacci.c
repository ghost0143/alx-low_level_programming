#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib3;
	int count;

	printf("%u, %u", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %u", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
