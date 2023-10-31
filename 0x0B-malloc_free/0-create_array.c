#include "main.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 *@size: size of the array in int
 *@c: stores strings
 *Return: a pointer to c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		ptr[k] = c;
	}
	return (ptr);
}
