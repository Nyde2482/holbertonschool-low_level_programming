#include "lists.h"

/**
 * _strlen - compute length of a string (manual version)
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to the pointer of the first node
 * @str: the string to be stored in the new node
 *
 * Return: address of the new node
 *         NULL if memory allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}