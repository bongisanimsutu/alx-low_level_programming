#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node at a specific index in a linked list
 * @head: first node in the linked list
 * @index: index of the desired node
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *temp = head;

    while (temp && count < index)
    {
        temp = temp->next;
        count++;
    }

    return (temp ? temp : NULL);
}
