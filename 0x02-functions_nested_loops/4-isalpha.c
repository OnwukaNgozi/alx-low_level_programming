include "main.h"
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
