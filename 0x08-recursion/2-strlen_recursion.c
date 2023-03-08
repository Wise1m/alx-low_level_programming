#include "main.h"
/**
 * _strlen_recursion - to return length of a string.
 * @s: pointer to the string
 *
 * Return: always 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}