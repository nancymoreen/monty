#include "monty.h"

/**
 *pop - The opcode pop removes the top element of the stack.
 *@stack:Stack of elements
 *@value: number of instruction
 */

void pop(stack_t **stack, unsigned int value)
{
	stack_t *temp;

	if (*stack == '\0')
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", value);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = stack[0]->next;
	free(temp);
}
