#include "main.h"
/**
 * _strlen - to return the length of a string
 * @s: pointer to be used
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
