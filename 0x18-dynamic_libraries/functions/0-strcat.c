#include"main.h"
#include <string.h>
/**
 * _strcat - it appends two strings
 * @dest: this is the function parameter
 * @src: second parameter
 * @n: this defines the third parameter
 * Return: dest
 */

char *_stncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int k;

	for (k = 0; k < n && *src != '\0'; k++)
	{
		dest[len + k] = *src;
		src++;
	}
	dest[len + k] = '\0';
	return (dest);
}
