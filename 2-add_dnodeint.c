#include "monty.h"
/**
 * add_dnodeint - adds a node at the beginnig of a list
 * @head: begining of the list
 * @n: intiger to add to the list
 * Return: Address of thenew element or NULL if it failed
 *
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *newn;

	newn = malloc(sizeof(stack_t));

	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	*head = newn;
	if (newn->next != NULL)
		(newn->next)->prev = newn;

	return (newn);
}
