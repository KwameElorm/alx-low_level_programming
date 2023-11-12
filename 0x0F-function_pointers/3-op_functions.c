#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - sum of two numbers
 *@a: first num.
 *@b:second number
 *Return: the sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: first number
 * @b: second number
 * Return: difference of numbers entered
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitply 2 numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod 2 numbers
 * @a: first number
 * @b: second number
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
