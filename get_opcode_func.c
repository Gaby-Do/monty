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
		{NULL, NULL}
	};
	int i = 0, a = 0;
	char *tok = NULL, *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	size_t size = 0;

	while (1)
	{
		a = getline(&str, &size, file);
		if (a == -1)
			break;
		puts("estoy en el while 1");
		printf("el string es...%s\n", str);
		line_number++;
		tok = strtok(str, DELIM);
		while (ops[i].opcode)
		{
			if (strcmp(tok, ops[i].opcode) == 0)
			{
				printf("el opcode es: %s\n", ops[i].opcode);
				ops[i].f(&stack, line_number);
			}
		i++;
		}
	}
	_pall(&stack, line_number);
	return (0);
}
