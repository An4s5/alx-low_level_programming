#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabets x10.
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
