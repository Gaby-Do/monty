#include "monty.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to pointer to start of list
 * @n: value of the new node
 * Return: address of the new element, or NULL if it failed
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (!*head)
		new->next = NULL;
	else
		(*head)->prev = new;
	return (*head = new);
}

/**
 * free_stackt - function that frees a dlistint_t list.
 * @stack: pointer to list
 */
void free_stackt(stack_t *stack)
{
	stack_t *prox;

	while (stack)
	{
		prox = stack->next;
		free(stack);
		stack = prox;
	}
}
