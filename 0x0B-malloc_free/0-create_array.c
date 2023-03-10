#include <stdlib.h>
#include "main.h"

/**
 * create_array - creats an array of chars, and initializes
 * it with a specific char
 * @size: the size of the array
 * @c: the chatr to initialize the array with
 *
 * Return: a pointer to the ar,ray, or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
