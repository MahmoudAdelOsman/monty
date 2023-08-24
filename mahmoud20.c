#include "monty.h"

/**
 * func_push - does the push function
 * @nu: pointer to the top element of a stack
 * @l: line number
 * Return: nothing
 */

void func_push(stc_t **nu, unsigned int l)
{
	if (momo->n <= 1 || !(valid_num(momo->tok[1])))
	{
		free_data_stc();
		dprintf(2, "L%d: usage: push integer\n", l);
		exit(EXIT_FAILURE);
	}
	*nu = malloc(sizeof(stc_t));
	if (*nu == NULL)
		print_error_for_malloc();
	(*nu)->next = (*nu)->prev = NULL;
	(*nu)->n = (int) atoi(momo->tok[1]);
	if (momo->top == NULL)
		momo->top = *nu;
	else
	{
		if (momo->stk)
		{
			(*nu)->next = momo->top;
			momo->top->prev = *nu;
			momo->top = *nu;
		}
		else
		{
			stc_t *n = momo->top;

			while (n->next)
				n = n->next;
			n->next = *nu;
			(*nu)->prev = n;
		}
	}
	momo->numn += 1;
}
