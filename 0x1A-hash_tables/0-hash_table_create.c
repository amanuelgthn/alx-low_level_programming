#include"hash_tables.h"
/**
*hash_table_create-function to create a hash table
*@size: size of the new table created
*Return:pointer to the newly created hash table or NULL if something wrong
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **data = NULL;
	
	table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	data = calloc(size, sizeof(char *));
	if (data == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = data;
	return (table);
}
