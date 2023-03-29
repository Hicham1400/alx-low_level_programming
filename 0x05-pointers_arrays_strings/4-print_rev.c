#include "main.h"
/**
 * print_rev: print a string in reverse
 * s: the string to be printed in rev
 * return: 0 is success
 */

void print_rev(char *s)
{
	int i = 0;

	int n;

	while (*s != '\0')
	{
		i++;
                s++;
	}
	s--;
	for (i = n; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

