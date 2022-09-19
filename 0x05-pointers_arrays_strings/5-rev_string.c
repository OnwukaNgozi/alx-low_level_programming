#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverese a string
 * @t: string to be reversed
 *
 * Return: 0
 */

void rev_string(char *t)
{
	int i, tmp, len = _strlen(t);

	for (i =0; i < len / 2; i++)
	{
		tmp = *(t + i);
		*(t + i) = *(t + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
