#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int length, n, i;

	length = 0;

	while (str[length] != '\0'; length++)
	{
		length++;
	}
	if (length % 2 == 0)
	{
	for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (lngth % 2)
	{
		for (n + (length - 1) /2; n < len - 1; n++)
		{
		_putchar(str[n =1]);
		}
	}
	_putchar('\n');
}
