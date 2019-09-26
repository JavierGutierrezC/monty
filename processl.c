#include "monty.h"
/**
 * processl - function to tokenize line and search opcode
 *
 *
 */
void processl(char *line, stack_t **head, unsigned int count)
{
	char *strt = NULL, **toks1 = _calloc(1, 1024), *delimi = " \t\r\n\a";
	int count1 = 0, flag = 0;
	instruction_t opc[] = {
		{"pop", popop}, {"nop", nopop}, {"pall", pallop},
		{"swap", swapop}, {"sub", subop}, {"pint", pintop},
		{"add", addop}};

	strt = strtok(line, delimi);
	for (count1 = 0; strt != NULL; count1++)
	{
		toks1[count1] = strt;
		strt = strtok(NULL, delimi); }
	count1 = 0;
	if (_strcmp(toks1[0], "push") == 0)
	{
		if (toks1[1])
			pushop(head, count, toks1[1]);
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
			if (_strcmp(toks1[0], opc[count1].opcode) == 0)
			{
				opc[count1].f(head, count);
				count1 = 6;
				flag = 1;
			}
			count1++;
		}
		if (flag == 0)
		{
			dprintf(2, "L%d: unknown instruction %s\n", count, toks1[0]);
			exit(EXIT_FAILURE);
		}
		/*printf("por aqui pasé una");*/
	}
	free(toks1);
}
