#include "monty.h"

/**
 * define_momo - defines a momo
 * Return: nothing
 */

void define_momo(void)
{
	momo  = malloc(sizeof(data_s));
	if (momo == NULL)
		print_error_for_malloc();

	momo->usex = malloc(sizeof(instr_t));
	if (momo->usex == NULL)
		print_error_for_malloc();

	momo->rf = NULL;
	momo->top = NULL;
	momo->a = NULL;
	momo->n = 0;
	momo->nu = 0;
	momo->numn = 0;
	momo->stk = 1;
}
