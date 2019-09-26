#include "monty.h"
/**
 * pushop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @element: int to push
 */
void pushop(stack_t **head, unsigned int count, char *element)
{
	int a = 0;
	int n;

	while(element[a] != '\0')
	{
		if (element[a] < '0' && element[a] > '9')
		{
			dprintf(2, "L%d: usage: push integer\n", count);
			exit(EXIT_FAILURE);
		}
		a++;
	}

	n = atoi(element);
	add_dnodeint_end(&head, n);
}

/**
 * pushop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @element: int to push
 */
void pushop(stack_t **head, unsigned int count, char *element)
{
        int a = 0;
        int n;

        while(element[a] != '\0')
        {
                if (element[a] < '0' && element[a] > '9')
                {
                        dprintf(2, "L%d: usage: push integer\n", count);
                        exit(EXIT_FAILURE);
                }
                a++;
        }

        n = atoi(element);
        add_dnodeint_end(&head, n);
}
/**
 * pallop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void pallop(stack_t **head, unsigned int count)
{
	if (*head != NULL)
		print_dlistint(head);
}
