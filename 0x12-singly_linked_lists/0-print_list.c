#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* print_list - a function that prints all the elements of a list_t list
* @ptr: list name
* Return: number of nodes.
*/
size_t print_list(const list_t *ptr)
{
	int count = 0;


	while (ptr)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}

