#include "main.h"
/**
 *_isalpha - checks if character is lower or upper case
 *@c: takes input
 *Return: 1 for letters otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
