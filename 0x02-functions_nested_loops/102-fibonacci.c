#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * separated by comma and space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int fib1 = 1;  /* Premier nombre de Fibonacci */
    int fib2 = 2;  /* Deuxième nombre de Fibonacci */
    int fib;       /* Variable temporaire pour calculer le nombre suivant */
    int count;     /* Compteur pour suivre le nombre de nombres de Fibonacci */

    /* Imprimer les deux premiers nombres de Fibonacci */
    printf("%d, %d", fib1, fib2);

    /* Calculer et imprimer les 48 nombres de Fibonacci suivants */
    for (count = 3; count <= 50; count++)
    {
        fib = fib1 + fib2;
        printf(", %d", fib);

        /* Mettre à jour les valeurs pour le calcul du prochain nombre de Fibonacci */
        fib1 = fib2;
        fib2 = fib;

        /* Si la ligne dépasse 80 caractères, passer à la ligne suivante */
        if (count % 10 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
