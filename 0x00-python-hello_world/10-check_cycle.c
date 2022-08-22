#include "lists.h"
/**
 * check_cycle - checks whether a linked list has a cycle
 * @list: linked list to be checked
 * Return: 1 for cycle 0 for none
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
