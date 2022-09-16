#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		if ((s == 50) || (s == 52))
		{
			continue;
		}
		putchar(s);
	}
	putchar(10);
}
