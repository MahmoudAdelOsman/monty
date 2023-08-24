#include "monty.h"

/**
 * func_pint - does the pint function
 * @nu: pointer to the top element of a stack
 * @l: line number
 * Return: nothing
 */

void func_pint(stc_t **nu, unsigned int l)
{
	(void) nu;
	if (momo->top == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", l);
		free_data_stc();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", momo->top->n);
}
