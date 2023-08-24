#include "monty.h"

/**
 * check_comm - checks if there is a comment
 * Return: 1 or 0
 */

int check_comm(void)
{
	if (momo->tok && momo->tok[0] && momo->tok[0][0] == '#')
		return (1);
	return (0);
}
