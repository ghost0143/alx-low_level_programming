#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i;

    /* Seed the random number generator with the current time */
    srand(time(0));

    /* Generate a random character for each position in the password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_ascii = rand() % 94 + 33; // Generate a random ASCII value between 33 and 126 (printable characters)
        password[i] = (char)random_ascii;
    }

    /* Add the null terminator to make it a valid C-string */
    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password */
    printf("%s\n", password);

    return (0);
}

