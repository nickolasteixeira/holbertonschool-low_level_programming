#include "hash_tables.h"
/**
 * key_index - returns an index based off the hash value
 * @key: the string to hash and get a hash value
 * @size: the size of the array
 *
 * Return: the index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
