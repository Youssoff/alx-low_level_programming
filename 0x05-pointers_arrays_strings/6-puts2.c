#include "main.h"
/**
 * puts2 - prints a string char then other char to stdout
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 2;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str + 0);
			str++;
		}
		i++;
	}
	_putchar('\n');
}
