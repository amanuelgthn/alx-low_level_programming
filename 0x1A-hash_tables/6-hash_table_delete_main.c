#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *collision = NULL;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			collision = ht->array[i];
			while (collision)
			{
				free(collision->key);
				collision->key = NULL;
				free(collision->value);
				collision->value = NULL;
				collision = collision->next;
			}
			free_list(collision);
			collision = NULL;
		}
		free(ht->array);
		ht->array = NULL;
		free(ht);
		ht = NULL;
	}
}
