#include "hash_tables.h"

/**
 * hash_table_create - function that creat hash table
 *
 * @prmSize: size of the array
 *
 * Return: pointer to a naw hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int prmSize)
{
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = prmSize;

	hashTable->array = calloc(sizeof(hash_node_t *), hashTable->size);
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	return (hashTable);
}
