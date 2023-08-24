#include "monty.h"

/**
 * func_for_mult - multiblies the top 2 elements in a stack
 * @nu: pointer to the top element in a stack
 * @l: line number
 * Return: nothing
 */

void func_for_mult(stc_t **nu, unsigned int l)
{
	stc_t *top1, *top2;

	(void) nu;
	if (momo->numn < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", l);
		free_all_mem();
		exit(EXIT_FAILURE);
	}
	top1 = momo->top;
	top2 = top1->next;

	top2->n = top2->n * top1->n;
	delete_ele_top();
	momo->numn -= 1;
}
