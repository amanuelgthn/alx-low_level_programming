#include"hash_tables.h"
/**
*free_list-free a singly linked list
*@head:doubly linked list
**/
void free_list(hash_node_t *head)
{

	while (head)
	{
		free(head->key);
		free(head->value);
		free(head);
		head = head->next;
	}
}
/**
*hash_table_print-function that prints a hashtable
*@ht:hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *collision;

	if (ht)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			collision = ht->array[i];
			if (collision)
			{
				while (collision)
				{
					printf("'%s': '%s'", collision->key, collision->value);
					j = j + 1;
					if (collision->next != NULL)
						printf(", ");
					collision = collision->next;
				}
				if (ht->array[i + 1] != NULL && j > 0)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
