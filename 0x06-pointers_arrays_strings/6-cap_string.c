#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to be modified
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int c, e;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c == 0 && s[c] >= 'a' && s[c] <= 'z')
			s[c] -= 32;

		for (e = 0; e < 13; e++)
		{
			if (s[c] == spe[e])
			{
				if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
				{
					s[c + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
