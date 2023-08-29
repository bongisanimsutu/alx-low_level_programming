#include "lists.h"

/**
 * pop_first_listint - removes and returns the data from the first node of a linked list
 * @head: pointer to the pointer of the first element in the linked list
 *
 * Return: the data inside the removed node, or 0 if the list is empty
 */
int pop_first_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (!head || !*head)
        return 0;

    data = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return data;
}
