/* 0-main.c - Main program */
#include <stdio.h>

/**
 * _isupper - Check if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    /* Check if the character is within the ASCII range of uppercase letters */
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

/**
 * main - Check the _isupper function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

