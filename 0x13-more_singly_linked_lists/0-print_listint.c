#include "lists.h"

/**
* print_listint - printing all the elements of a linked list
* @h: linked list of type listint_t to be printed
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t element = 0;

while (h != NULL)
{
printf("%d\n", h->n);
element++;
h = h->next;
}

return (element);
}
