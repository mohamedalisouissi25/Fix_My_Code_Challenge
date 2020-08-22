#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp = *head;
	unsigned int p;

if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (p = 0; p < index - 1; p++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	saved_head = tmp->next;
	tmp->next = saved_head->next;
	if (saved_head->next != NULL)
		saved_head->next->prev = tmp;
	free(saved_head);
	*head = saved_head;
	return (1);
}
