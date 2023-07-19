#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int count = 50;
        int i;
        unsigned long long int fib1 = 1;
        unsigned long long int fib2 = 2;

        printf("%llu", fib1);
        for (i = 1; i < count; i++)
        {
                printf(", %llu", fib2);
                unsigned long long int next = fib1 + fib2;
                fib1 = fib2;
                fib2 = next;
        }
        printf("\n");

        return 0;
}
