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
	unsigned long int hash_value;
	unsigned long int key_value;
	
	hash_value = hash_djb2(key);
	key_value = hash_value % size;
	return (key_value);
}
