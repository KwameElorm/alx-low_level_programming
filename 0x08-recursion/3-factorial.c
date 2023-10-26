#include "main.h"
/**
 *factorial - is the function name
 *@n: is the function pararmeter
 *Return: 0
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (n);
}
