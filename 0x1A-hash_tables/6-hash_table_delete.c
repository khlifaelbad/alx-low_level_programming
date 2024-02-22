#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash tables.
 * @ht: Hash table.
 * Return: return by void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *current, *tmp;

	if (!ht)
		return;
	while (n < ht->size)
	{
		if (ht->array[n])
		{
			if (!ht->array[n]->next)
			{
				free(ht->array[n]->key);
				free(ht->array[n]->value);
				free(ht->array[n]);
			}
			else
			{
				current = ht->array[n];
				while (current)
				{
					tmp = current->next;
					free(current->key);
					free(current->value);
					free(current);
					current = tmp;
				}
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

