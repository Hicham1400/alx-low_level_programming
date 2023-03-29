#include "main.h"
/**
 * puts2: prints every other char of a string
 * str: char to check
 * Return: print
 */

void puts2(char *str)
{
	int string = 0;
	int t = 0;
	char *n = str;
	int i;

	while (*n != '\0')
	{
		n++;
		string++;
	}
	t = string -1;
	for (i = 0; i <= t; i++)
	{
		if(n % 2 ==0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
