#include "main.h"
/**
 *_islower - checks is the character are in lower case
 *@c: checks the inputs
 *Return: returns 1 if 'c' is in lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
