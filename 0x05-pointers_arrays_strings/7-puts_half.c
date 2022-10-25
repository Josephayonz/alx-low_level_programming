#include "main.h"
#include <string.h>

/**
 * puts_half -  prints second half of a string,
 * followed by a new line
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, x;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (x = len / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}

	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
