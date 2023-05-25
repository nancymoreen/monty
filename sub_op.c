#include "monty.h"

/**
 * sub_op - The opcode sub subtracts the top element of the stack from the
 * second top element of the stack.
 * @pointer: Head pointer to the stack of elements
 */

void sub_op(stack_t **pointer)
{
	int subtract = 0;

	if (!(*pointer && *pointer != (*pointer)->next))
		pfailure("L%u: can't sub, stack too short\n", op_env.lineno);

	subtract = (*pointer)->n;

	op_pop(pointer);

	(*pointer)->n -= subtract;
}
