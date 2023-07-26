#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to be worked on
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	j = (i / 2) + 1;
	if (i % 2 == 0)
	{
		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
	else
	{
		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
