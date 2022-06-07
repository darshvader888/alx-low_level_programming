#include "main.h"
/**
 * main - prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char print[9] = "_putchar";

	int a = 0;

	while (a < 8)
	{
		_putchar(print[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
