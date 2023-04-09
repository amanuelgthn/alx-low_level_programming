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
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *collision;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			collision = ht->array[i];
			while (collision)
			{
				free_list(collision);
				collision = collision->next;
			}
		}
		free(ht);
	}
}
