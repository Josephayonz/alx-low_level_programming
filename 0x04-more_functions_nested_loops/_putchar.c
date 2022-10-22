#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 * Description: prints the character given as an argument
 * @c: argument of type char
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
