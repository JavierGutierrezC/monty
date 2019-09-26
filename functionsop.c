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
	/* add_dnodeint(head, n); */
	
}
/**
 * pallop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void pallop(stack_t **head, unsigned int count)
{
	(void) count;
	/*if (*head != NULL)*/
      /* size_t count = 0; */
	if (*head == NULL)
		printf("es null");

      while (*head != NULL)
      {
	      printf("%d\n", (*head)->n);
	      *head = (*head)->next;
	      /* count++; */
      }
      /* return (count); */
}
/**
 * popop - function to del element in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void popop(stack_t **head, unsigned int count)
{
        if (*head != NULL)
                print_dlistint(*head);
	else
	{
		dprintf(2, "L%d: can't pop an empty stack", count);
		exit(EXIT_FAILURE);
	}
}
/**
 * pintop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void pintop(stack_t **head, unsigned int count)
{
        if (*head != NULL)
                print_dlistint(*head);
	else
        {
                dprintf(2, "L%d: can't pint an empty stack", count);
                exit(EXIT_FAILURE);
        }
}
/**
 * pop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void subop(stack_t **head, unsigned int count)
{
        if (*head != NULL)
                print_dlistint(*head);
	else
        {
                dprintf(2, "L%d: can't sub, stack too short", count);
                exit(EXIT_FAILURE);
        }

}
