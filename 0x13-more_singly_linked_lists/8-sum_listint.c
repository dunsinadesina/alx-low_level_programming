#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function
 * @head: parameter
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
