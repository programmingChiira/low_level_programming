#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to head of list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
		else
		{
			free(current);
			break;
		}
	}

	return (count);
}
