#include"main.h"
/**
 * _islower - checks for lowercase
 * @c: to be checked
 * Return:1 for lowercase characters or 0 or anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
