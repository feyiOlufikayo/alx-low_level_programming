#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{

				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				{
				if (num1 == 98 && num2 == 99)

					continue;
				}
					putchar(',');
					putchar(' ');
	}
	putchar('\n');
	return (0);
}
