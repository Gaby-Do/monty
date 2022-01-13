#include "monty.h"
#include <stdio.h>

/**
 *get_opcode - function that gets the right function
 *@file: pointer to all content from file
 *@ops: initialaized structure
 *Return: 0
 */

int get_opcode(FILE *file, instruction_t ops[])
{
	int i = 0;
	char *tok = NULL, *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	size_t size = 0;

	while (1)
	{
		if (getline(&str, &size, file) == -1)
		{
			free(str);
			break;
		}
		line_number++;
		tok = strtok(str, DELIM);
		i = 0;
		if (tok)
		{
			while (ops[i].opcode)
			{
				if ((strlen(tok) == strlen(ops[i].opcode)) &&
						strcmp(tok, ops[i].opcode) == 0)
					ops[i].f(&stack, line_number);
				/*else
				{
					fprintf(stderr, "L%d: unknown instruction %s\n", line_number, tok);
					free(str);
					fclose(file);
					exit(EXIT_FAILURE);
				}*/
			i++;
			}
		}
	}
	if (stack)
		free_stackt(stack);
	return (0);
}
