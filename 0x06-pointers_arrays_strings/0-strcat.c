#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string src string is appended to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c, j;

	c = 0;
	j = 0;

	while (dest[c] != '\0')
		c++;

	while (src[j] != '\0')
	{
		dest[c] = src[j];
		c++;
		j++;
	}
	dest[c] = '\0';

	return (dest);
}
