#include "hash_tables.h"

/**
 * key_index - retrieve an index from key
 *
 * @prmKey: prmKey
 * @prmSize: size
 *
 * Return: index
 */
unsigned long int key_index(
	const unsigned char *prmKey,
	unsigned long int prmSize
) {
	return (hash_djb2(prmKey) % prmSize);
}
