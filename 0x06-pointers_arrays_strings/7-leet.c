#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int c, e;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (e = 0; e < 10; e++)
		{
			if (s[c] == a[e])
			{
				s[c] = b[e];
			}
		}
	}

	return (s);
}
