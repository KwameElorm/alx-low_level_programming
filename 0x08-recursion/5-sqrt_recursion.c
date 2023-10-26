#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function name
 * @n: parameter of the function
 * Return: square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural square root
 * @n: function parameter
 * @i: another function parameter
 * Return: returns squareroot
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
return (actual_sqrt_recursion(n, i + 1));
}


