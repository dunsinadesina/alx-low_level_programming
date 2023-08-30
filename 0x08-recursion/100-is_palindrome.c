#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - function
 * @s: parameter
 * Return: integer
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (is_palindrome2(s, 0, length - 1));
}
/**
 * _strlen_recursion - function
 * @s: parameter
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome2 - function
 * @s: parameter
 * @begin: parameter
 * @end: parameter
 * Return: integer
 */
int is_palindrome2(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	else if (s[begin] != s[end])
	{
		return (0);
	}
		return (is_palindrome2(s, begin + 1, end - 1));
}
