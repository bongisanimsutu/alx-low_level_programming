#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: the computed sum
 */
int sum_listint(listint_t *head)
{
    int total_sum = 0;
    listint_t *temp = head;

    while (temp)
    {
        total_sum += temp->n;
        temp = temp->next;
    }

    return (total_sum);
}
