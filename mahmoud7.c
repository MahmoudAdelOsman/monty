#include "monty.h"

/**
 * free_all_toke - frees all token reserved
 * Return: nothing
 */

void free_all_toke(void)
{
	int z = 0;

	if (momo->tok == NULL)
		return;

	while (momo->tok[z])
	{
		free(momo->tok[z]);
		z++;
	}
	free(momo->tok);
	momo->tok = NULL;
}
