#include "monty.h"

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
		{NULL, NULL}
	};
	int i = 0;
	char *tok = NULL, *str = NULL;
	stack_t **stack = NULL;
	unsigned int line_number = 0;

	while (1)
	{
		if (getline(&str, NULL, file) == -1)
			break;
		line_number++;
		tok = strtok(str, DELIM);
		while (ops[i].opcode)
		{
			if (strcmp(tok, ops[i].opcode) == 0)
			{
				ops[i].f(stack, line_number);
			}
		i++;
		}
	}
	return (0);
}
