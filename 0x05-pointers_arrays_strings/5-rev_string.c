#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int x;
	int z;
	char tmp;

	x = 0;
	z = strlen(s) - 1;

	while (x < z)
	{
		tmp = s[z];
		s[z] = s[x];
		s[x] = tmp;
		x++;
		z--;
	}
}
