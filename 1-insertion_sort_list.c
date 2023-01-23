#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
* @list: pointer to list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *pointer, *temp;

	if (!list)
		return;

	pointer = *list;

	while (pointer)
	{
		while (pointer->next && (pointer->n) > pointer->next->n)
		{
			temp = pointer->next;
			pointer->next = temp->next;
			temp->prev = pointer->prev;

			if (pointer->prev)
				pointer->prev->next = temp;

			if (temp->next)
				temp->next->prev = pointer;

			pointer->prev = temp;
			temp->next = pointer;

			if (temp->prev)
				pointer = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		pointer = pointer->next;
	}
}
