# 0x19. C - Hash tables
## About
An intro project on:
- Hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
-What are the most common use cases of hash tables
## Requirements
- Python 3.4
- pep8 1.7
- gcc 4.8.4
## Files
### Mandatory
**[0-hash_table_create.c](0-hash_table_create.c)** - Write a function that creates a hash table.
- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
- Returns a pointer to the newly created hash table

**[1-djb2.c](1-djb2.c)** - Write a hash function implementing the djb2 algorithm.
- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

**[2-key_index.c](2-key_index.c)** - Write a function that gives you the index of a key.
- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- Returns the index at which the key/value pair should be stored in the array of the hash table

**[3-hash_table_set.c](3-hash_table.c)** - Write a function that adds an element to the hash table.
- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- Returns: 1 if it succeeded, 0 otherwise

**[4-hash_table_get.c](4-hash_table_get.c)** - Write a function that retrieves a value associated with a key..
- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
- Returns the value associated with the element, or NULL if key couldn’t be found

**[5-hash_table_print.c](5-hash_table_print.c)** - Write a function that prints a hash table.
- Prototype: `void hash_table_print(const hash_table_t *ht);`
- You should print the key/value in the order that they appear in the array of hash table

**[6-hash_table_delete.c](6-hash_table_delete.c)** - Write a function that deletes a hash table.
- Prototype: `void hash_table_delete(hash_table_t *ht);`
