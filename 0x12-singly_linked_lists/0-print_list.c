#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */


size_t print_list(const list_t *h)
{
	size_t z;

	for (z = 0; h; z++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (z);
}
