#include "main.h"
/**
 * print_rev - print the string reversed
 * @s: string to be worked on
 */
void print_rev(char *s)
{
	int counter;

	while (s[counter])
		counter++;

	while (counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
