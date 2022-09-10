#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

int main(void)
{
	int h, j;

	for (h = 0; h <= 99; h++)
	{
		for (j = 0; j <= 99; j++)
		{
				putchar((h / 10) + '0');
				putchar((h % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (h != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}
