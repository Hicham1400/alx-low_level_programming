#include "main.h"
/**
 * puts_half: prints the half of a string
 * str: char to check
 * Return: the half of the input
 */

void puts_half(char *str)
{
	int string; n; o;
	o = 0

        for (string = 0; str[string] != '\0'; string++)
		o++;
	n = (o / 2);

	if ((o % 2) == 1)
		n = ((o + 1) / 2);

	for (string = n; str[string] != 0; string++)
		_putchar(str[string]);
	_putchar('\n');
}
