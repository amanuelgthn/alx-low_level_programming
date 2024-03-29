#include"hash_tables.h"
/**
*hash_table_get-function that retrieves a value associated with a key
*@ht:hash table
*@key:key
*Return:the value associated with the element or NULL if key couldn't be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long ind;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	ind = key_index((unsigned char *)key, ht->size);
	current = ht->array[ind];
	if (current == NULL)
		return (NULL);
	else if (strcmp(current->key, key) == 0)
		return (current->value);
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
