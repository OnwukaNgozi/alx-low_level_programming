#include <stdio.h>

/**
 * main - prints lowercase alphabets then uppercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char s = 'a';

	for (s = 'a' ; s <= 'z' ; s++)
	{
		putchar(s);
	}
	for (s = 'A', s <= 'Z' ; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return(0);
}
