#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * Return: no return
*/
void pall(stack_t **head)
{
	stack_t *stak;
	stak = *head;
	if (stak == NULL)
		return;
	while (stak)
	{
		printf("%d\n", stak->n);
		stak = stak->next;
	}
}
