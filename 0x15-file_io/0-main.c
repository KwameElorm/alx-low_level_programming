#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
<<<<<<< HEAD
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
=======
		{
			dprintf(2, "Usage: %s filename\n", av[0]);
			exit(1);
		}
>>>>>>> 00b0edd34642518540a64be800eb9c5af93e0275
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
