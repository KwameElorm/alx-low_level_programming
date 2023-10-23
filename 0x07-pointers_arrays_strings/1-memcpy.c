#include "main.h"

/**
  * _memcpy - main function
  * @src: Source parameter
  * @dest: Destination
  * @n: Function
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
	dest[p] = src[p];
	}
	return (dest);
}

