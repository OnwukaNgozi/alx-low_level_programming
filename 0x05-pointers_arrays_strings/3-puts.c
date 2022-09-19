#include <stdio.h>
#include "main.h"

/**
*_puts - prints a string
*@str: string to print
*
*Description: prints a string
*On success: returns no error
*/

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		putchar(*(str + a));
		a++;
	}
	putchar(10);
}
