#include "monty.h"
/**
 * processl - function to tokenize line and search opcode
 *
 *
 */
void processl(char **toks1, stack_t **head, unsigned int count)
{
	int flag = 0, count1 = 0;
	instruction_t opc[] = {
		{"pop", popop}, {"nop", nopop}, {"pall", pallop},
		{"swap", swapop}, {"sub", subop}, {"pint", pintop},
		{"add", addop}};

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
