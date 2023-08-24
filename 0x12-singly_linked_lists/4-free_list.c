#include <stdlib.h>
#include "lists.h"

/**
 * free_list - releases memory occupied by a linked list
 * @head: list_t list to be deallocated
 */
void free_list(list_t *head)
{
    list_t *currentNode;

    while (head)
    {
        currentNode = head->next;
        free(head->str);
        free(head);
        head = currentNode;
    }
}
