#include "main.h"
#include "stdlib.h"
/**
 *str_concat - a function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: concatenation of strings 1&2
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1  = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}

	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; k <= length2; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	return (ptr);
}

