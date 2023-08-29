#include "lists.h"

/**
 * add_nodeint_at_start - adds a new node at the beginning of a linked list
 * @head: pointer to the pointer of the first node in the list
 * @data: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if allocation fails
 */
listint_t *add_nodeint_at_start(listint_t **head, const int data)
{
    listint_t *new_node = malloc(sizeof(listint_t));

    if (!new_node)
        return NULL;

    new_node->n = data;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
