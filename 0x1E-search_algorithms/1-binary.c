#include "search_algos.h"

/**
  * binary_search - Search for a value in a sorted array
  * @array: A pointer to first element
  * @size: size of the list.
  * @value: The value to search in.
  * Return: If the value isn't present or array is NULL, -1.
  *         Other than that, index where the value is located.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
