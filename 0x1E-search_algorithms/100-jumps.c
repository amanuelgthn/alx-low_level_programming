#include"search_algos.h"
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, root, high = value - 1, found;

	if (array == NULL)
		return (-1);
	root = sqrt(high);
	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d}\n", i, i);
		if (array[i] == value)
			return (i);
		else if (array[i + root] >= value)
		{
			if (found == 0)
			{
				printf("Value found between indexes [%d] and [%d]\n", i, i + root);
				found = 1;
			}
		}
		else if (array[i + root] < value)
			i += root;
	}
	return (-1);
}
