#include "main.h"
#include <stdio.h>

/**
 *  print_to_98: prints all the natural numbers from n to 98
 * \n:  followed by a new line
 * n: the first number to begin printing
 */
void print_to_98(int n)
{
	int i;
       int j;	

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d\n", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j++)
		{
			if (j != 98)
				printf("%d\n", j);
			else if (j == 98)
				printf("£d\n", j);
		}
	}
}
