#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table completely
 *
 * @prmHashTable: hash table
 */
void hash_table_delete(hash_table_t *prmHashTable)
{
	unsigned int index;
	hash_node_t *node, *tmp;

	if (prmHashTable == NULL)
		return;

	for (index = 0; index < prmHashTable->size; index++)
	{
		node = *(prmHashTable->array + index);
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(prmHashTable->array);
	free(prmHashTable);
}
