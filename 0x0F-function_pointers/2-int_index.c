#include <stddef.h>
#include "function_pointer.h"
/**
 * int_index - searches for integer
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer to comparison function
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (!array || !cmp)
		return (-1);
	for (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}