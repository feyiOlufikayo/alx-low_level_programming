#include "main.h"
/**
 * _strspn - return legnth of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int match = 0;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++) /*iterate through target*/
			if (s[i] == accept[j]) /*record & break at first match*/
			{
				matches++;
				break;
			}

		if (accept[j + 1] == '\0' && s[i] != accept[j])
			return (match); /*return if idx doesnt match*/
	}

	i++;
}

return (matches); /*Return num if all match till end*/
}
