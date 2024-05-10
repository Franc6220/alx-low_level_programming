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
			printf("Found %d at index: %d\n\n", value, linear_search(array[i], size, value);

			// Compare the value
			if (array[i] == value)
				{
					return i; // Return index if value is found
				}
		}
	// Value not found
	return -1;
}
