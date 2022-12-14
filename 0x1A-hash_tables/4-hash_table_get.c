#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value from a key
 *
 * @prmHashTable: hash table
 * @prmKey: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *prmHashTable, const char *prmKey)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (prmHashTable == NULL || prmKey == NULL)
		return (NULL);

	index = key_index((const unsigned char *) prmKey, prmHashTable->size);
	node = *(prmHashTable->array + index);

	while (node != NULL)
	{
		if (strcmp(prmKey, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
