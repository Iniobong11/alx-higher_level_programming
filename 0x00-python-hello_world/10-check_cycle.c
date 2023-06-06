#include "lists.h"

/**
* check_cycle - check if a singly linked list has a cycle
* @list: beginning node pointer
* Return: 0 ifno cycle, 1 when there is cycle
*/
int check_cycle(listint_t *list)
{
	listint_t *real, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	real = list;
	check = real->next;

	while (real != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
		if (real == check)
			return (1);
		real = real->next;
		check = check->next->next;
	}
	return (0);
}
