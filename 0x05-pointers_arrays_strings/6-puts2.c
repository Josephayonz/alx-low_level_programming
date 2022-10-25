#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of string to stdout,
 * followed by a new line
 *
 * @str: strings to print the char from
 * Return: void
 */
void puts2(char *str)
{
	int x;

	x = 0;

	while (x < ((int) strlen(str)))
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
