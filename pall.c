#include "monty.h"
/**
 * f_pall - it prints the stack
 * @head: the stack head
 * @counter: it has no used
 * Return: it  returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
