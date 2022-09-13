#include "main.h"
/**
 * main - Entry point
 * Program that prints _putchar, followed by new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char s[] = "_putchar";
		int i = 0;
	while (s[i] != '\0')
	{
		_putchae(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
