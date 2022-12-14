#include <stdlib.h>

/**
 * create_array - creates an arrays of chars, and
 * initializes it with a specific char.
 * @size: sie of the array
 * @c: char to insert
 * Return: Null if size is zero or if it fails,
 * pointer to array if every thing is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);

}
