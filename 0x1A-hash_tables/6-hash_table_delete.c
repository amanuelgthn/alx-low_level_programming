#include"hash_tables.h"
/**
*hash_table_delete-a function that delets a hash table
*@ht:a hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;
	while(i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			hash_node_t *next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
