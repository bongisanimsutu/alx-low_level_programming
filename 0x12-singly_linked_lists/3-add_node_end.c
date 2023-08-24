#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newNode;
    list_t *temp = *head;
    unsigned int length = 0;

    while (str[length])
        length++;

    newNode = malloc(sizeof(list_t));
    if (!newNode)
        return NULL;

    newNode->str = strdup(str);
    newNode->len = length;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return newNode;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;

    return newNode;
}
