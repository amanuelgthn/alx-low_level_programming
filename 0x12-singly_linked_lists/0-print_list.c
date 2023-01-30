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
		printf("%s\n", current_node->str);
		current_node = current_node->next;
		count = count +1;
	}
	return (count);
}
