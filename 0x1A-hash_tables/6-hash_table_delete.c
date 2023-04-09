#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				free_list(ht->array[i]);
				ht->array[i] = ht->array[i]->next;
			}
			free(ht->array);
			free(ht);
		}
	}
}
