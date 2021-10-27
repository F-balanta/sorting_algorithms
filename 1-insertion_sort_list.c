#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list of integers
* @list: Linked list
* Return: Nothing, this function is (void)
* Write a function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* Prototype: void insertion_sort_list(listint_t **list);
* You are not allowed to modify the integer n of a node.
* You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements
* Write in the file 1-O, the big O notations of the time complexity
* of the Insertion sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *C_node, *count, *aux, *swap;

	if (list != NULL)
	{
		for (C_node = (*list)->next; C_node != NULL; C_node = C_node->next)
		{
			count = C_node->prev;
			while (count != NULL)
			{
				swap = count->next;
				if (swap->n < count->n)
				{
					aux = swap->next;
					if (aux != NULL)
						aux->prev = count;
					count->next = aux;
					if (count->prev != NULL)
						count->prev->next = swap;
					swap->next = count;
					swap->prev = count->prev;
					count->prev = swap;
					count = swap;
					if (count->prev == NULL)
						*list = count;
					print_list(*list);
				}
				else
					count = count->prev;
			}
			if (C_node->next == NULL)
				*list = C_node;
		}
		while ((*list)->prev != NULL)
			*list = (*list)->prev;
	}
}
