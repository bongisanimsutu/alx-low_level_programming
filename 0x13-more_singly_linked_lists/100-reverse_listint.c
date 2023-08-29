#include "lists.h"

/**
 * reverse_listint_custom - reverses a linked list
 * @head: pointer to the pointer of the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint_custom(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;
    listint_t *current = *head;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;

    return *head;
}
