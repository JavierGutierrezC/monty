#include "monty.h"
/**
 * processl - function to tokenize line and search opcode
 *
 *
 */
void processl(char *line, stack_t **head, unsigned int count)
{
	char *strt = NULL, **toks1 = _calloc(1024);
	int n = 0;
	char *delimi = " \t\r\n\a";
	int count1 = 0;

	instruction_t opc[] = {
		{"pop", popop}, {"nop", nopop}, {"pall", pallop},
		{"swap", swapop}, {"b", subop},	{"pint", pintop},
		{"add", addop}
	};

	strt = strtok(line, delimi);
	for (count1 = 0; strt != NULL; count++)
	{
		toks1[count1] = strt;
		/*printf("%s\n",toks[count]);*/
		strt = strtok(NULL, delimi);
	}

	count1 = 0;
	if (_strcmp(toks1[0], "push"))
	{
		if (toks[1])
			pushop(&head, count, toks1[1]);
		else
		{
			dprintf(2, "L%d: usage: push integer\n", count);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		while (count1 < 7)
		{
			if (_strcmp(toks1[0], *(opc[count1]).opcode))
			{
				opc[count1].f(&head, count);
			}
		}
	}
}
