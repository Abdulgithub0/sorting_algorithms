#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked using insertion sort algorithm
 * @list: pointer to pointer to the address of head node
 * Return: nothing i.e void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *forward, *backward, *first_node, *temp, *next_node, *prev_node;

	first_node = *list;
	traveler = first_node->next;
	while (traveler)
	{
		current = traveler
		temp = traveler;
		while ((current != NULL) && (current->prev->n > temp->n))
		{
			current->prev->next = current->next; 
			current->next->prev = current->prev;
			if ((current->prev->prev) == NULL)
				break;
			current = current->prev->prev;
		}
		if (current->prev->prev == NULL)
		{
			temp->prev = NULL;
			temp->next = current;
			current->prev->prev = temp;
			*list = temp;
		}
		else
		{


	}

}
