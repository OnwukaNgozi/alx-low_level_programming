#include "main.h"

/**
 * _iupper- Check if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
