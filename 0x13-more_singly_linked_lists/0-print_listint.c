#include <stdio.h>
#include "lists.h"

/**
 * print listint_t - prints all the elements of linked list
 * @h: linked list of listint_t to print
 *
 * Return: umber of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d ", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
