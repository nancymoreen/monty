#include "monty.h"

/**
 * pint_op - The opcode pint prints the value at the top of the stack,
 * followed by a new line.
 * @stack: Stack of elements
 * @number_line: The number of the line in the file
 */

void pint_op(stack_t **stack, unsigned int number_line)
{
	if (*stack == '\0')
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", number_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", stack[0]->n);
}
