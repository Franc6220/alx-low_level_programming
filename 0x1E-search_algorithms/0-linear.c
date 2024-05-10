#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
				{
					return i; // Return index if value is found
				}
		}
	return -1; // Return -1 if value not found
}	
