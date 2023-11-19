#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len - func that returns num of elements in a linked list_t list
* @a: pointer to list_t
* Return: number of nodes
*/
size_t list_len(const list_t *a)
{
	int count = 0;

	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}

