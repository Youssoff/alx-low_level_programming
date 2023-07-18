#include <stdio.h>
/**
 * main - outputs a statement
 * Return: 0 always
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
