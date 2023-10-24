#include "main.h"

/**
  * _strchr - is the main function
  * @s: the Function parameter
  * @c: the Function parameter
  * Return: 0
  */
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
	if (s[r] == c)
	return (s + r);
	}
	return (0);
}

