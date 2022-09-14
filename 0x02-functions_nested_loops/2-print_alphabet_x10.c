#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char r, d;

	for (d = 0 ; d <= 9 ; d++)
       {
	       for (r = 'a' ; r <= 'z' ; r++)
	       {
		       _putchar(r);
	       }
	       _putchar('\n');
       }
}
