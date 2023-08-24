#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - inserts a new node at the start of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be placed in the new node
 *
 * Returns: a pointer to the new node's address, or NULL if allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode;
    unsigned int length = 0;

    while (str[length])
        length++;

    newNode = malloc(sizeof(list_t));
    if (!newNode)
        return NULL;

    newNode->str = strdup(str);
    newNode->len = length;
    newNode->next = (*head);
    (*head) = newNode;

    return (*head);
}
