#include "monty.h"

/**
 *get_opcode - function that gets the right function
 *@str: pointer to line with opcode
 *@stack: doble pointer to a my stack
 *@line_number: line read
 *Return: 0
 */

int get_opcode(char *str)
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
	char *tok = NULL;
	char **stack_t = NULL;
	unsigned int line_number = 0;

	tok = strtok(str, DELIM);
	while (ops[i].opcode)
	{
		if (strcmp(tok, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
		}
		i++;
	}
	return (0);
}
