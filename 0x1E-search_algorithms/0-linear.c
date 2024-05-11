#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		{
			return -1; // Return -1 if array is NULL
		}
	// Iterate through the array
	for (size_t i = 0; i < size; i++)
		{
			// Print value being compared
			printf("Value checkedd array [%zu] = [%d]\n", i, array[i]);
			// Compare the value
			if (array[i] == value)
				{
					pritf("Found %d at index: %zu\n", value, i);
					return i; // Return index if value is found
				}
		}
	// Value not found returns -1
	return -1;
}
