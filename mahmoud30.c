#include "monty.h"

/**
 * str_to_words - breaks the string line into words
 * Return: nothing
 */

void str_to_words(void)
{
	int z = 0;
	char *ss = " \n", *a = NULL, *tok = NULL;

	tok = malloc(sizeof(char) * (strlen(momo->a) + 1));
	strcpy(tok, momo->a);
	momo->n = 0;
	a = strtok(tok, ss);
	while (a)
	{
		momo->n += 1;
		a = strtok(NULL, ss);
	}

	momo->tok = malloc(sizeof(char *) * (momo->n + 1));
	strcpy(tok, momo->a);
	a = strtok(tok, ss);
	while (a)
	{
		momo->tok[z] = malloc(sizeof(char) * (strlen(a) + 1));
		if (momo->tok[z] == NULL)
			print_error_for_malloc();
		strcpy(momo->tok[z], a);
		a = strtok(NULL, ss);
		z++;
	}
	momo->tok[z] = NULL;
	free(tok);
}
