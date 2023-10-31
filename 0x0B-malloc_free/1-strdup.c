#include "main.h"
#include "stdlib.h"
/**
 *_strdup - function that returns a pointer
 *to a newly allocated space in memory
 *@str: input string
 *Return: a pointer of array to the memory location
 */
char *_strdup(char *str)
{
	unsigned int i, k;
	char *ptr;

	if (str == NULL)
	{
	return (NULL);
	}
	i = 0;
	while  (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = str[k];
	}
	return (ptr);
}
