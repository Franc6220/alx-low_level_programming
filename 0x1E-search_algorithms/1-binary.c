#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		{
			return -1; // Returns -1 when array is NULL
		}
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Search in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
			printf("\n");

			if (array[mid] == value)
			{
				printf("Found %d at index: %zu\n", value, mid);
				return mid;         // Value found at index mid
			}
			else if (array[mid] < value)
			{
				left = mid + 1;     // Search the right half
			}
			else
			{
				right = mid - 1;    // Search in the left half
			}
	}
		printf("Found %d at index: -1\n", value);
		return -1;          // Returns -1 when value not found
}

