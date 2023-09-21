#include "lists.h"
/**
 * free_list - function to free list
 * @head: parameter pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *currentHead, *temp;

	currentHead = head;
	while (currentHead != NULL)
	{
		temp = currentHead;
		currentHead = currentHead->next;
		if (temp->str == NULL)
			free(temp->str);
	}
	free(temp);
}
