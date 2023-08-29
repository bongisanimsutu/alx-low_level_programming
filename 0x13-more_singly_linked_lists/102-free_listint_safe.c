#include "lists.h"

/**
 * free_listint_safely - frees a linked list while handling looped lists
 * @head: pointer to the pointer of the first node in the linked list
 *
 * Return: the number of nodes freed
 */
size_t free_listint_safely(listint_t **head)
{
    size_t count = 0;
    listint_t *current = *head;
    listint_t *next;

    if (!head || !*head)
        return 0;

    while (current)
    {
        next = current->next;

        if (current - next > 0)
        {
            free(current);
            current = next;
            count++;
        }
        else
        {
            free(current);
            *head = NULL;
            count++;
            break;
        }
    }

    *head = NULL;

    return count;
}
