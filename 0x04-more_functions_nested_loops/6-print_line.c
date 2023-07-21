#include "main.h"
/**
 * print_line - print st. line of char _ to stdout
 * @n: no of times char _ should be printed
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('_');
		}
	}
}

