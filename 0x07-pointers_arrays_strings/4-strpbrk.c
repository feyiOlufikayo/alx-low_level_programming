#include "main.h"
#define NULL 0

/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * @accept, or NULL if no such byte is found.
 * Return: a pointer to the byte in @s that matches one of the bytes in
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
	
	x++;
	}
	return (NULL);
}
