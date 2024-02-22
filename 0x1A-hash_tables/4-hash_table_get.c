#include "hash_tables.h"

/**
 * hash_table_get - value associated with the key.
 * @ht: Hash table.
 * @key: The key.
 * Return: the value associated with the element
 *  or 0 if key doesn't found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int list = 0;

	if (!ht)
		return (NULL);
	list = key_index((const unsigned char *)key, ht->size);
	current = ht->array[list];
	while (current)
	{
		if (strncmp(key, current->key, strlen(current->key) + 1) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

