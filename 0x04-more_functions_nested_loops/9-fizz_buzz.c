#include <stdio.h>
#include "main.h"

/**
 * main - program that prints either number or fizz or buzz or fizzbuzz
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}else
				printf("Buzz");
		}
		else
			printf("n "; ('\n'));
	}
	return (0);
}
