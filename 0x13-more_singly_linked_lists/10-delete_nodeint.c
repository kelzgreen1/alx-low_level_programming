#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the
 * node at a given position in a listint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node that
 * should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (i == index - 1 && current != NULL && current->next != NULL)
	{
		temp = current->next;
		current->next = current->next->next;
		free(temp);
		return (1);
	}

	return (-1);
}
