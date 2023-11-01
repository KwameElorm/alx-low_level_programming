#include"main.h"
#include"stdlib.h"
/**
 *argstostr -  a function that concatenates all the arguments
 *@ac: argument count
 *@av: argument vector
 *Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b, c = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		length++;
	}
	length += ac;

	ptr = malloc(sizeof(char) * length + 1);
		if (ptr == NULL)
			return (NULL);
		for (a = 0; a < ac; a++)
		{
			for (b = 0; av[a][b]; b++)
			{
				ptr[c] = av[a][b];
				c++;
			}
			if (ptr[c] == '\0')
			{
				ptr[c++] = '\n';
			}
		}
	return (ptr);
}
