#include <stdio.h>
/**
 * main - outputs a statement
 * Return: 0 always
 */
int main(void)
{
	int ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
