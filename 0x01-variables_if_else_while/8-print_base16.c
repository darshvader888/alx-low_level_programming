#include <stdio.h>
/**
 * main - main block
 * Description: print all numbers of base 64 in lowercase.
 * use 'putchar' only three times.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
