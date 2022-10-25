#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * Description: prints the character given as an argument
 * @y: argument of type char
 * Return: 1 on success and -1 on error
 */

int _putchar(char y)
{
	return (write(1, &y, 1));
}
