#include "main.h"
#include <stdio.h>
/**
 *main - function to print name of a file
 *@argv: defines arguement vector
 *@argc: defines arguement count
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
