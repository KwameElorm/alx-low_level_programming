#include"main.h"

/**
 * _strncpy - copies an inputted number
 * @dest: stores copy of the string
 * @src: is the source string
 * @n: the max number of bytes to be copied from src.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = src_len; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
