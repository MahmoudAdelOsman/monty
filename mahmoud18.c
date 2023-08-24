#include "monty.h"

/**
 * delete_top - deletes the top element of a stack
 * @nu: pointer to the top element of a stack
 * @l: line number
 * Return: nothing
 */

void delete_top(stc_t **nu, unsigned int l)
{
	(void) nu;

	if (momo->top == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", l);
		free_data_stc();
		exit(EXIT_FAILURE);
	}

	delete_ele_top();
	momo->numn -= 1;
}
