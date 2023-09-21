#include "lists.h"
/**
 * add_node_end - function
 * @head: parameter for beginning of nodes
 * @str: string parameter
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentHead;
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
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		currentHead = *head;
		while (currentHead->next != NULL)
			currentHead = currentHead->next;
		currentHead->next = newNode;
	}
	return (newNode);
}
/**
 * _strlen - function for length of string
 * @str: parameter
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
