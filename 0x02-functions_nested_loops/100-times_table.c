#include "main.h"

/**
 * print_times_table - Imprime la table de multiplication jusqu'à n
 * @n: Nombre indiquant jusqu'à quelle valeur imprimer la table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i;
    int j;
    int result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            if (result < 10)
            {
                if (j > 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                }
                _putchar(result + '0');
            }
            else if (result < 100)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar((result / 100) + '0');
                _putchar(((result / 10) % 10) + '0');
                _putchar((result % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
