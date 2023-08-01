#include "lists.h"

/**
 * sum_listint - returns sum of all data
 *
 * @head: pointer to first node
 *
 * Return: add
*/
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
