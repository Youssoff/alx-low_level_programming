#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	char temp;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
