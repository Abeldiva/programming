#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of linked list
 * @h: linked list of listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
