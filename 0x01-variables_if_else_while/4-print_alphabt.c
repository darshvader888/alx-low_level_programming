#include <stdio.h>
/*
 * main - main block
 * Description: Use 'putchar' to print all the letters except q and e
 * Return: 0
 */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
