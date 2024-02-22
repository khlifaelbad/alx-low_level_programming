#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Hash table.
 * Return: return with void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int num = 0;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!ht->array[i]->next)
			{
				if (num)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				num = 1;
			}
			else
			{
				current = ht->array[i];
				while (current)
				{
					if (num)
						printf(", ");
					printf("'%s': '%s'", current->key, current->value);
					num = 1;
					current = current->next;
				}
			}
		}
		i++;
	}
	printf("}\n");
}

