#include "monty.h"

/**
 * add_op - The opcode add adds the top two elements of the stack.
 * @pointer: Head pointer to the stack of elements
 */

void add_op(stack_t **pointer)
{
	int add_on = 0;

	if (!(*pointer && *pointer != (*pointer)->next))
		pfailure("L%u: can't add, stack too short\n", op_env.lineno);

	add_on = (*pointer)->n;

	op_pop(pointer);

	(*pointer)->n += add_on;
}
