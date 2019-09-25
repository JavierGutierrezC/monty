#include "monty.h"
/**
 * processl - function to tokenize line and search opcode
 *
 *
 */
char **processl(char *line)
{
	char *strt = NULL, **toks1 = _calloc(1024);
	int n = 0;
	char *delimi = " \t\r\n\a";
	int count = 0;

	instruction_t opc[] = {
		{"push", pushop}, {"pop", popop}, {"nop", nopop},
		{"pall", pallop}, {"swap", swapop}, {"b", subop},
		{"pint", pintop}, {"add", addop}
	};

	strt = strtok(line, delimi);
	for (count = 0; strt != NULL; count++)
	{
		toks1[count] = strt;
		/*printf("%s\n",toks[count]);*/
		strt = strtok(NULL, delimi);
	}
	count = 0;
	while (c
