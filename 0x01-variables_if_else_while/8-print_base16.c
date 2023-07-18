#include <stdio.h>
/**
 * main - outputs a statement
 * Description: 'print hexa numbers'
 * Return: 0 always
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
