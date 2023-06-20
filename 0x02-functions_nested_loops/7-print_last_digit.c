#include "main.h"

/**
 *print_last_digit - function that prints last digit of a number.
 *@n: input number.
 *Return: last digit.
 */

int print_last_digit(int n)
{
	int i;

	l = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
