#include "main.h"
#include<stdio.h>
/**
 *main - func. that prints number of args
 *@argc: defines the argument count
 *@argv: defines the argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
