#include "main.h"
/**
 * puts2 - prints a string char then other char to stdout
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str + 0);
			str++;
		}
	}
	_putchar('\n');
}
