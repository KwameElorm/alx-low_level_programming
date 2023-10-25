#include "main.h"
/**
 *_puts_recursion - is the function name
 *@s: is the parameter of the function
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
