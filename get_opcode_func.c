#include "monty.h"

/**
 *get_opcode - function that gets the right function
 *@tok: pointer to array of chars
 *@stack: doble pointer to a array
 *@line_number: line read
 *Return: 0
 */

int get_opcode(char *tok, stack_t **stack, unsigned int line_number)
{
	instructions_t ops[] = {
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

	while (ops[i].opcode)
	{
		if (strcmp(opcode, opcode_list[i].opcode) == 0)
		{
			return (ops[i].f(stack, line_number));
		}
		i++;
	}

	return (0);
}
