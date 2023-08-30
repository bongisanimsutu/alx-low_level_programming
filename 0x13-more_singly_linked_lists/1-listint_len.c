#include "lists.h"

/**
 * listint_len - computes the count of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Description: This function calculates and returns the total
 *              number of nodes in the linked list.
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        node_count++;
        h = h->next;
    }

    return (node_count);
}
