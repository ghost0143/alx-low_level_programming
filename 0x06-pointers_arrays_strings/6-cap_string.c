#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";

    for (int i = 0; separators[i]; i++)
    {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;

    while (str[i])
    {
        // Capitalize the first letter of the string
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;

        // Capitalize after word separators
        if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;

        i++;
    }

    return (str);
}
