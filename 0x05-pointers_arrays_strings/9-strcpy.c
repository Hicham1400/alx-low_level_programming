#include "main.h"
/**
 * char *_strcpy: a function that copies the string pointer
 * dest: copy to
 * src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0,

	    while(*(src + i) != '\0')
	    {
		    i++;
	    }
	    for ( ; n < i ; n++)
	    {
		    dest[n] = src[n];
	    }
	    dest[i] = '\0';
	    return (dest);
}
