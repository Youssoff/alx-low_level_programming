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
		if (ch == 101)
		{
			ch++;
		}
		else if (ch == 113)
		{
			ch++;
		}
		else
		{
		putchar(ch);
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
