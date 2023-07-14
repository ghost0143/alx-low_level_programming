#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensDigit;
	int onesDigit;

	for (tensDigit = 0; tensDigit <= 8; tensDigit++)
	{
		for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
		{
			putchar((tensDigit % 10) + '0');
			putchar((onesDigit % 10) + '0');

			if (tensDigit != 8 || onesDigit != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}
