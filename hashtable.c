#include "hashtable.h"

#include <stdlib.h>
#include <stddef.h>

HashTable* hash_new(int size) {
	HashTable* table = (HashTable*)malloc(sizeof(HashTable));
	table->size = size;

	table->array = (struct Node**)malloc(sizeof(struct Node) * size);
	for (int i = 0; i < size; i++) {
		table->array[i] = NULL;
	}

	return table;
}


