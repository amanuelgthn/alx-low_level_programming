#include"lists.h"
/**
*list_len-print number of elements in a single linked list
*@h:constant singly linked list
*Return:number of nodes
**/
size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	int count = 0;

	while (current_node)
	{
		if (current_node->str == NULL)
		{
			count = count;
		}
		current_node = current_node->next;
		count = count + 1;
	}
	return (printf("%d",count));
	;
}
