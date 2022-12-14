#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, j;

	c = 0;
	j = 0;

	while (dest[c] != '\0')
		c++;

	while (src[j] != '\0' && j < n)
	{
		dest[c] = src[j];
		c++;
		j++;
	}

	dest[c] = '\0';

	return (dest);
}
