#include "main.h"

/**
 * *_strcat - function concatenate strings
 *@dest: param ponter to a char
 *@src: param pointer to a char
 * Return: return value of dest
 */
char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	dest[i] = '\0';
	return (dest);
}
