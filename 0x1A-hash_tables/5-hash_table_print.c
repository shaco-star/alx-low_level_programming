#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *sep = "";
	
	if (!ht)
		return (NULL);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
