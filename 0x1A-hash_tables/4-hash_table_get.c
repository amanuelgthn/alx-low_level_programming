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

	if (ht == NULL || key == NULL)
		return (NULL);
	ind = key_index((unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
		return (NULL);
	else
		return(ht->array[ind]->value);
}
