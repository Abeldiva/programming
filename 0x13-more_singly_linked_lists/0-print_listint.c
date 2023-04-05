#include <stdio.h>
#include "lists.h"
/**
 * print listint_t - prints all the elements of linked list
 * @h: linked list of listint_t to print
 * main - check the code
 *
 * Return: umber of nodes
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
int main(void)
{
	return (0);
}
