#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}

