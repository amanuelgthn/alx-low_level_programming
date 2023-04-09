#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next = NULL, *current = NULL;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				next = current->next;
				free_list(current);
				current = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
