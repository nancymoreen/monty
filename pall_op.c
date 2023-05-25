#include "monty.h"

/**
 * pall_op - The opcode pall prints all the values on the stack,
 * starting from the top of the stack
 * @stack: Stack of elements
 * @line: Line in inspection
 */

void pall_op(stack_t **stack,  __attribute__((unused))unsigned int line)
{
	stack_t *stack_pall;

	stack_pall = *stack;

	if (stack_pall == '\0')
		return;

	while (stack_pall != '\0')
	{
		printf("%i\n", stack_pall->n);
		stack_pall = stack_pall->next;
	}
}
