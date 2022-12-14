#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 *
 * @prmString: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *prmString)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *prmString++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
