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
		head->key = NULL;
		free(head->value);
		head->value = NULL;
		free(head->next);
		head->next = NULL;
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
			if (ht->array[i])
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				j = j + 1;
			}
			collision = ht->array[i];
			while(collision->next)
			{
				printf("'%s': '%s'", collision->next->key, collision->next->value);
				collision = collision->next;
				if (collision->next != NULL)
					printf(", ");
			}
			free_list(collision);
			if (ht->array[i + 1] && j > 0)
				printf(", ");
		}
		printf("}\n");
	}
}
