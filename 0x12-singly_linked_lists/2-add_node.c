#include "lists.h"
/**
 * add_node - function to add node
 * @head: parameter of beginning of nodes
 * @str: string parameter
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *strCopy;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	strCopy = strdup(str);
	if (strCopy == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strCopy;
	newNode->len = _strlen(strCopy);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
/**
 * _strlen - length of string function
 * @str: parameter pointer
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
