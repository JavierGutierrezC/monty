#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - check the code for Holberton School students.
 * @ac: arguments length
 * @av: arguments array
 * Return: Always 0 if all its ok or Failure if it fails.
 */
int main(int ac, char **av)
{
	FILE *file;
	char *line = NULL;
	size_t n;
	ssize_t leline;
	stack_t *head;
	unsigned int count = 1;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	/* here we have to put condition if file is null*/
	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	/* here we have to put condition if file is null*/
	head = NULL;
	while (1)
	{
		leline = getline(&line, &n, file);
		if (leline == EOF)
		{
			free(line);
			printf("por aqui paseé EOF");
			fclose(file);
			exit(EXIT_SUCCESS);
		}
		processl(line, &head, count);
		count++;
		/* printf("%s", line); */
	}
	return (0);
}
