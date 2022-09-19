#include "main.h"

/**
*_strlen - returns the length of a string
*@b : string
*Return: returns length as integer
*/

int _strlen(char *b)
{
	int len = 0;

	while (*(b + len) != '\0')
		len++;

	return (len);
}
