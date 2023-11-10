#include "function_pointers.h"
/**
 *array_iterator -  function that executes a function
 *@array: array
 *@size: size of array
 *@action: function pointer to the array
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
