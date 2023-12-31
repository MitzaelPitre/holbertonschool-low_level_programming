#include "hash_tables.h"
/* task two */

/**
 * key_index - get the trash table index mapped to by a given key
 * @key: the key to hash
 * @size: the hash table size
 * Return: the index mapped to by key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
