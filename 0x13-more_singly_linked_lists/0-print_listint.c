#include"lists.h"
/**
*print_list-print all the elements of a list and return number if nodes
*@h:constant singly linked list
*Return:number of nodes
**/
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	int count = 0;

	while (current_node)
	{
		if (current_node->n == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", current_node->n);
		}
		current_node = current_node->next;
		count = count + 1;
	}
	return (count);
}
