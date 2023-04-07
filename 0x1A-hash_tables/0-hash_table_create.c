#include"hash_tables.h"
/**
*hash_table_create-function to create a hash table
*@size: size of the new table created
*Return:pointer to the newly created hash table or NULL if something wrong
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array =calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
