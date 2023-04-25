#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked using insertion sort algorithm
 * @list: pointer to pointer to the address of head node
 * Return: nothing i.e void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *first_node, *temp, *trav;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	first_node = *list;
	trav = first_node->next;
	while (trav)
	{
		while (trav->prev && trav->prev->n > trav->n)
		{
			temp = trav;
			if (trav->next)
				trav->next->prev = trav->prev;
			trav->prev->next = trav->next;
			trav = trav->prev;
			temp->prev = trav->prev;
			temp->next = trav;
			if (trav->prev)
				trav->prev->next = temp;
			trav->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			trav = trav->prev;

		}
		trav = trav->next;
	}

}
