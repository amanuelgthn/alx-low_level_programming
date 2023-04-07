#include"hash_tables.h"
/**
*hash_table_create-function to create a hash table
*@size: size of the new table created
*Return:pointer to the newly created hash table or NULL if something wrong
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
