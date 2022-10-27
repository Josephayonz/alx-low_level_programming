#include <unistd.h>

/**
 * _putchar - writes the character x to stdout
 * @x: The character to print
 *
 * Return: On success 1 and -1 on error.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
