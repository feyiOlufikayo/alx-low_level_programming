#include <stdio.h>

/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(d));
	printf("size of an int: %lu byte(s)\n", sizeof(a));
	printf("size of a long int: %lu byte(s)\n", sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("size of a float: %lu byte(s)n", sizeof(f));
	return (0);
}

