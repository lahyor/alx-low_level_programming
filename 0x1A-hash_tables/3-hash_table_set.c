#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *news;
	char *value_cop;
	unsigned long int ind, c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cop = strdup(value);
	if (value_cop == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (c = ind; ht->array[c]; c++)
	{
		if (strcmp(ht->array[c]->key, key) == 0)
		{
			free(ht->array[c]->value);
			ht->array[c]->value = value_cop;
			return (1);
		}
	}

	news = malloc(sizeof(hash_node_t));
	if (news == NULL)
	{
		free(value_cop);
		return (0);
	}
	news->key = strdup(key);
	if (news->key == NULL)
	{
		free(news);
		return (0);
	}
	news->value = value_cop;
	news->next = ht->array[ind];
	ht->array[ind] = news;

	return (1);
}
