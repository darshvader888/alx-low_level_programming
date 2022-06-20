#include "main.h"
/**
 * *_strchr - locates a character to a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first c in the string s
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while(1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
