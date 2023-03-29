#include "main.h"
/**
 * print_rev: print a string in reverse
 * s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int i = 0;

	int n;

	while (s != '\0')
	{
		i++;
                s++;
	}
	s--;
	for (i = n - 1; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

