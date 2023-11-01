#include "main.h"
#include "stdlib.h"
/**
 *alloc_grid - a function that returns a pointer
 *to a 2 dimensional array of integers
 *@width: with integer
 *@height: height integer
 *Return: 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(ptr);
			free(ptr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	return (ptr);
}
