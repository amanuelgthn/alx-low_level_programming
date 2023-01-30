#include"lists.h"
/**
*print_list-print all the elements of a list and return number if nodes
*@h-constant singly linked list
**/
size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	int count = 0;

	while(current_node != NULL)
	{
		printf("%s", current_node->str);
		count = count +1;
	}
	return (count);
}
