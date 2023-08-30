#include "lists.h"

/**
 * print_linked_list_integers - Displays all elements in a linked list
 * @list: A linked list of type listint_t to be displayed
 *
 * Return: Number of nodes in the list
 */
size_t print_linked_list_integers(const listint_t *list)
{
    size_t node_count = 0;

    while (list)
    {
        printf("%d\n", list->n);
        node_count++;
        list = list->next;
    }

    return (node_count);
}
