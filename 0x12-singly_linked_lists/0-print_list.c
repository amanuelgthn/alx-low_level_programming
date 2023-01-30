#include"lists.h"
/**
*print_list-print all the elements of a list and return number if nodes
*@h-constant singly linked list
**/
size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	int count = 0;
	
	if(current_node == NULL)
	{
		printf("[0] (nil)\n");
	}
	while(current_node)
	{
		if(current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		count = count +1;
	}
	return (count);
}
