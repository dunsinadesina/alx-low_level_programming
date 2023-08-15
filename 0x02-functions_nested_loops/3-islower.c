#include "main.h"
/**
 *_islower - This is a to check for lowercase characters
 *
 * @c: parameter to be checked
 *
 * Return: This is 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
