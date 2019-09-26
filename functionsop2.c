#include "monty.h"
/**
 * divop - function to div int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @line: line to free
 * @file: file to free
 */
void divop(stack_t **head, unsigned int count, char *line, FILE *file)
{
	(void) count;
	(void) head;
	(void) line;
	(void) file;
}
/**
 * addop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @line: line to free
 * @file: file to free
 */
void addop(stack_t **head, unsigned int count, char *line, FILE *file)
{
	int addr = 0;
	stack_t *current;
	int n = 0;

	if (*head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			n++;
			current = current->next;
		}

		if (n >= 2)
		{
			addr = (*head)->n;
			delete_dnodeint_at_index(head, 0);
			addr = addr + (*head)->n;
			(*head)->n = addr;
		}
		else
		{
			free(*head);
			free(line);
			fclose(file);
			dprintf(2, "L%d: can't add, stack too short\n", count);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		free(line);
		fclose(file);
		dprintf(2, "L%d: can't add, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
}
/**
 * swapop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @line: line to free
 * @file: file to free
 */
void swapop(stack_t **head, unsigned int count, char *line, FILE *file)
{
	if (*head != NULL)
		free_dlistint(*head);
	else
	{
		free(line);
		fclose(file);
		dprintf(2, "L%d: can't swap stack too short\n", count);
		exit(EXIT_FAILURE);
	}
}
