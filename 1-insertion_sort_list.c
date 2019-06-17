#include "sort.h"
/**
 * bubble_sort - Bubble sort algoritm
 *
 * @array: Size of the array
 * @size: Size of the array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *copy;
	/* listint_t **temp; */
	copy = *list;
	while(copy)
	{
		printf("%d : ",copy->n);
		copy = copy->next;
	}
	print_list(*list);
}


void insertion_swap(listint_t *item_1, listint_t *item_2)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	
}
