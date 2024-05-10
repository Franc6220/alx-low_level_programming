#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		{
			return -1;
		}
	// Iterate through the array
	for (i = 0; i < size; i++)
		{
			// Print value being compared
			printf("Comparing %d with %d\n", array[i], value);

			// Compare the value
			if (array[i] == value)
				{
					return i; // Return index if value is found
				}
		}
	// Value not found
	return -1;
}
