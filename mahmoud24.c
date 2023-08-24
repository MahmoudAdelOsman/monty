#include "monty.h"

/**
 * func_run - executes the usex instruction
 * Return: nothing
 */

void func_run(void)
{
	stc_t *nu = NULL;

	if (momo->n == 0)
		return;

	momo->usex->func(&nu, momo->nu);
}
