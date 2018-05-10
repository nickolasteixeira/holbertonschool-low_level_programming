#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "1");
	hash_table_set(ht, "mentoiner", "2");
	
	/*
	hash_table_set(ht, "depravement", "3");
	hash_table_set(ht, "serafins", "4");
	hash_table_set(ht, "stylist", "5");
	hash_table_set(ht, "subgenera", "6");
	*/
	
	value = hash_table_get(ht, "betty");
	printf("%s:%s\n", "betty", value);
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\n", "hetarias", value);
	value = hash_table_get(ht, "mentoiner");
	printf("%s:%s\n", "mentoiner", value);
	
	hash_table_set(ht, "mentoiner", "3");
	value = hash_table_get(ht, "mentoiner");
	printf("%s:%s\n", "mentoiner", value);

	hash_table_set(ht, "hetairas", "3");
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\n", "hetairas", value);
		
	/*
	value = hash_table_get(ht, "depravement");
	printf("%s:%s\n", "depravement", value);
	value = hash_table_get(ht, "serafins");
	printf("%s:%s\n", "serafins", value);
	value = hash_table_get(ht, "stylist");
	printf("%s:%s\n", "stylist", value);
	value = hash_table_get(ht, "subgenera");
	printf("%s:%s\n", "subgenera", value);
	*/
	
	return (EXIT_SUCCESS);
}
