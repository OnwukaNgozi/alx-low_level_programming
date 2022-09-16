#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a staright line
 * @a: parameter
 * Return: return nothing
 */

void print_line(int a)
{
	while (a-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
