#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * is_palindrome - Confirm a palindrome singly linked list
  * @head: head of the singly linked list
  *
  * Return: 0 if not palindrome, 1 if it is palindrome
  */
int is_palindrome(listint_t **head)
{
    listint_t *start = NULL, *end = NULL;
    unsigned int a = 0, len = 0, len_cyc = 0, len_list = 0;

    if (head == NULL)
        return (0);

    if (*head == NULL)
        return (1);
    
    start = *head;
    len = listint_len(start);
    len_cyc = len * 2;
    len_list = len_cyc - 2;
    end = *head;

    for (; a < len_cyc; a = a + 2)
    {
        if (start[a].n != end[len_list].n)
            return (0);

        len_list = len_list - 2;
    }

    return (1);
}

/**
  * get_nodeint_at_index - linked list node gotten
  * @head: linked list head
  * @index: index to find in the linked list
  *
  * Return: The specific node of the linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (cur != NULL)
		{
			if (iter_times == index)
				return (cur);

			cur = cur->next;
			++iter_times;
		}
	}

	return (NULL);
}

/**
  * slistint_len - Counts the number of elements
  * @h: linked list to be counted
  *
  * Return: Number of elements in the linked list
  */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}
