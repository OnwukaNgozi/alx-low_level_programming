#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -prints the sum of two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}

void print_diagsums(int *a, int size)

{

    int sum;



    int i;

    

    int j;

    

    int counter;



    sum = *(a+0);

    

    counter = 0;

    

    

    for (i = 0; i < (size*size); i++)

    {

        if (counter == size+1) 

        {

            sum += *(a+i);

            

            counter = 0;

        }

        counter++;

    }

    

    printf("%d, ", sum);

    

    sum = 0;

    

    counter = 0;

    

    for (i = 0; i < (size*size); i++)

    {

        if (i % (size-1) == 0 && i != 0) 

        {

            if (counter == size) 

            {

                break;  

            }

            sum += *(a+i);  

            counter++;

        }

    }

    printf("%d\n", sum);

}```


