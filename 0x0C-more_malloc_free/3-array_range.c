#include "main.h"
#include "stdlib.h"

/**
 *array_range - a function that creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: integer to pointer
 */
int *array_range(int min, int max)
{
	int i, l;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
