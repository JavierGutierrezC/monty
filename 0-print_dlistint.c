#include "monty.h"
/**
 * print_dlistint - prints all the elemenets of a list
 * @head: pointer point to the list
 *
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const stack_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
