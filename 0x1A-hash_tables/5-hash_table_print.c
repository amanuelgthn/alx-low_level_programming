#include"hash_tables.h"
/**
*hash_table_print-function that prints a hashtable
*@ht:hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next)
				printf(", ");
		}
		printf("}\n");
	}
}
