#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			hash_node_t *next = ht->array[i]->next;

			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
