#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next = NULL, *current = NULL;

	if (ht == NULL)
		return;
	else
	{
		for (; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
			next = NULL'
		}
		free(ht->array);
		ht->array = NULL;
		free(ht);
		ht = NULL;
	}
}
