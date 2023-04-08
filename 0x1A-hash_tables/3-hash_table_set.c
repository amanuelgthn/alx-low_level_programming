#include"hash_tables.h"
/**
*add_node-adds a new node at the beginning of a list_t list
*@head: a singly linked list
*@str:string to be added to the node
*Return:the address of the new element or NULL if it failed
**/
/**list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int str_len = strlen(str);

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = str_len;
	if ((*head) == NULL)
	{
		new->next = NULL;
		(*head = new);
	}
	else
	{
		new->next = (*head);
		(*head) = new;
	}
	return (new);
}**/
/**
*create_node- create hash node of the new element
*@key:key
*@value:value of key
*Return:return pointer to the created node
**/
hash_node_t* create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = malloc(sizeof(strlen(key) + 1));
	if (node->key == NULL)
	{
		return (NULL);
	}
	node->value = malloc(sizeof(strlen(value) + 1));
	if (node->value == NULL)
	{
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return node;
}
			   
				   
/**
*hash_table_set-function that adds an element to the hash table
*@ht:hash table
*@key:key the key cannot be an empty string
*@value:value of key, value must be duplicated and can be an empty string
*Return:1 if it succeeded or 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	usigned long int ind;
	hash_node_s *new = create_node(key, value);

	if (new == NULL)
	{
		return (0);
	}
	ind = key_index(key, ht->size);
	hash_node_t *current = ht->array[ind];
	if (current == NULL)
	{
		ht->array[ind] = value;
	}
	else if (strcmp(current->value, value) == 0)
	{
		strcpy(ht->array[ind], value);
	}
	return (1);
}
