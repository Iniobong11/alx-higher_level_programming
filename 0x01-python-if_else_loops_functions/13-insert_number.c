#include "lists.h"

/**
 * insert_node - put one number into a singly sorted-linked list.
 * @head: linked list head pointer.
 * @number: num to insert.
 *
 * Return: NULL If the function fails
 * Otherwise - new node pointer.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *cur;

	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);
	cur->n = number;

	if (node == NULL || node->n >= number)
	{
		cur->next = node;
		*head = cur;
		return (cur);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	cur->next = node->next;
	node->next = cur;

	return (cur);
}
