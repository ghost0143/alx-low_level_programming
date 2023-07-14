#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundredsDigit;
	int tensDigit;
	int onesDigit;

	for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
	{
		for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
		{
			for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
			{
				putchar((hundredsDigit % 10) + '0');
				putchar((tensDigit % 10) + '0');
				putchar((onesDigit % 10) + '0');

				if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}
