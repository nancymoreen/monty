#include "monty.h"

/**
 * push_op - The opcode push pushes an element to the stack.
 * @stack: Stack of elements
 * @line_number: Line number of the file
 */

void push_op(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *new, *temp;

	if (global.line[1] == NULL || check_num(global.line[1]) == -1)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	new = malloc(sizeof(stack_t));
	if (new == '\0')
	{
		fprintf(stderr, "Error: malloc failed\n");
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	new->next = '\0';
	new->n = atoi(global.line[1]);
	new->prev = '\0';
	*stack = new;
	new->next = temp;
	if (temp != '\0')
		temp->prev = new;
}
