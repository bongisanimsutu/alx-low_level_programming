#include "lists.h"

/**
 * free_listint_and_set_head - frees a linked list and sets head to NULL
 * @head: pointer to the pointer of the listint_t list to be freed
 */
void free_listint_and_set_head(listint_t **head)
{
    listint_t *temp;

    if (head == NULL || *head == NULL)
        return;

    while (*head)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }

    *head = NULL;
}
