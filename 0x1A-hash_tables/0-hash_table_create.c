#include"hash_tables.h"
/**
*hash_table_create-function to create a hash table
*@size: size of the new table created
*Return:pointer to the newly created hash table or NULL if something wrong
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = calloc(1, sizeof(hash_table_t));
	hash_node_t *data = calloc(size, sizeof(char *)
	unsigned int i = 0;

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array =calloc(size, sizeof(char *));
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
