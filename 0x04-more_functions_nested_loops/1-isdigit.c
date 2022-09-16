#include "main.h"

/**
*_isdigit - checks if a character is digit  or not
*@c: character to be tested
*Return: 1 whether it is, else 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
