#include "lists.h"

/**
 * find_nodeint_at_index - finds the node at a specified index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the desired node
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *find_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = head;

    while (current && i < index)
    {
        current = current->next;
        i++;
    }

    return (current ? current : NULL);
}
