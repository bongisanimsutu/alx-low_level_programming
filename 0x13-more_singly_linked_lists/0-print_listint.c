#include "lists.h"

/**

display_listint - displays all the elements in a linked list

@head: a pointer to the head of the listint_t list

Return: the count of nodes
*/
size_t display_listint(const listint_t *head)
{
size_t count = 0;

while (head)
{
printf("%d\n", head->n);
count++;
head = head->next;
}

return (count);
}
