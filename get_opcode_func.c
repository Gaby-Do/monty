#include "monty.h"
#include <stdio.h>

/**
 *get_opcode - function that gets the right function
 *@file: pointer to all content from file
 *Return: 0
 */

int get_opcode(FILE *file)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{NULL, NULL}
	};
	int i = 0;
	char *tok = NULL, *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 1;
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
				if (strcmp(tok, ops[i].opcode) == 0)
				{
					ops[i].f(&stack, line_number);
				}
			i++;
			}
		}
	}
	if (stack)
		free_stackt(stack);
	return (0);
}
