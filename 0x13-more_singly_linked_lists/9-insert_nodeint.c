#include "lists.h"

/**
 * insert_nodeint_at_custom_index - inserts a new node at a specific index in a linked list
 * @head: pointer to the pointer of the first node in the list
 * @index: index where the new node is to be inserted
 * @data: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_custom_index(listint_t **head, unsigned int index, int data)
{
    unsigned int i;
    listint_t *new_node;
    listint_t *temp = *head;

    new_node = malloc(sizeof(listint_t));
    if (!new_node || !head)
        return NULL;

    new_node->n = data;
    new_node->next = NULL;

    if (index == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    for (i = 0; temp && i < index; i++)
    {
        if (i == index - 1)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            return new_node;
        }
        else
            temp = temp->next;
    }

    free(new_node); // Clean up memory if insertion fails
    return NULL;
}
