#include "hash_tables.h"

/**
 * key_index - get index for given key
 * @key: key to hash
 * @size: size of hash table
 *
 * Return: index of key using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
