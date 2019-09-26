#include "monty.h"
/**
 * nopop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void nopop(stack_t **head, unsigned int count)
{
	(void) count;
        if (*head != NULL)
                print_dlistint(*head);
}
/**
 * addop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void addop(stack_t **head, unsigned int count)
{
	if (*head != NULL)
		print_dlistint(*head);
	else
        {
                dprintf(2, "L%d: can't add stack too short", count);
                exit(EXIT_FAILURE);
        }
}
/**
 * swapop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void swapop(stack_t **head, unsigned int count)
{
        if (*head != NULL)
                print_dlistint(*head);
	else
        {
                dprintf(2, "L%d: can't swap stack too short", count);
                exit(EXIT_FAILURE);
        }
}