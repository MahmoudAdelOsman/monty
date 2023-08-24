#include "monty.h"

/**
 * swap_func - does the swap function
 * @nu: pointer to the top element of a stack
 * @l: line number
 * Return: nothing
 */

void swap_func(stc_t **nu, unsigned int l)
{
	stc_t *top1, *top2;

	(void) nu;
	if (momo->numn < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", l);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

	top1 = momo->top;
	top2 = top1->next;
	top1->next = top2->next;
	if (top1->next)
	{
		top1->next->prev = top1;
	}
	top2->next = top1;
	top1->prev = top2;
	top2->prev = NULL;
	momo->top = top2;
}
