#include "lists.h"

/**
 * add_nodeint_to_end - adds a node to the end of a linked list
 * @head: pointer to the pointer of the first element in the list
 * @data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if allocation fails
 */
listint_t *add_nodeint_to_end(listint_t **head, const int data)
{
    listint_t *new_node = malloc(sizeof(listint_t));

    if (!new_node)
        return NULL;

    new_node->n = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    listint_t *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return new_node;
}
