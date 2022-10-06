#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 */

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);

/**
 * isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 */}i
	int _isNumber(char *argv)
{
	int i;

