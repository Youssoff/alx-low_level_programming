#include <stdio.h>
/**
 * main - outputs a statement
 * Return: 0 always
 */
int main(void)
{
	int ch = 97;
	int n = 65;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
