#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y, z;

		for (x = 0; x < size; x++)
		{
			for (y = size - x - 2; y >= 0; y--)
			{
				_putchar(' ');
			}

			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
