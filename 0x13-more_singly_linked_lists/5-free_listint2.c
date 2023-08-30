#include "lists.h"

/**
 * free_listint - releases memory of a linked list
 * @head: listint_t list to be deallocated
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head)
    {
        current = head->next;
        free(head);
        head = current;
    }
}
