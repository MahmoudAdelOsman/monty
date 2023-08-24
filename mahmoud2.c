#include "monty.h"

/**
 * close_f - closes a file
 * Return: nothing
 */

void close_f(void)
{
	if (momo == NULL)
		return;
	fclose(momo->rf);
	momo->rf = NULL;
}
