#include "monty.h"

/**
 * free_momo - frees all data in momo
 * Return: nothing
 */

void free_momo(void)
{
	if (momo->top)
		free_stc(momo->top);

	momo->top = NULL;
}

/**
 * free_data_stc - frees all momo
 * Return: nothing
 */

void free_data_stc(void)
{
	if (momo == NULL)
		return;

	if (momo->usex)
	{
		free(momo->usex);
		momo->usex = NULL;
	}
	free_momo();
	if (momo->a)
	{
		free(momo->a);
		momo->a = NULL;
	}
	free(momo);
}
