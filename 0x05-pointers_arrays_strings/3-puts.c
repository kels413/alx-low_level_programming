#include "main.h"
#include <stdio.h>

/**
 * _puts - prints  a string followed by new line.
 * @str: - string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* code */
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

