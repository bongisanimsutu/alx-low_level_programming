#include "lists.h"

/**
 * custom_listint_len - calculates the number of elements in a linked list
 * @head: pointer to the head of the listint_t list
 *
 * Return: the count of nodes
 */
size_t custom_listint_len(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current)
    {
        count++;
        current = current->next;
    }

    return count;
}
