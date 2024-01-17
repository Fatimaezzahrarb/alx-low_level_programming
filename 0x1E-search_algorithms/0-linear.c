#include "search_algos.h"

/**
 * linear_search - search algorithm in a string
 * @array: input of an array
 * @size: size of an array
 * @value: value for searching in
 * Return: Always use EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
