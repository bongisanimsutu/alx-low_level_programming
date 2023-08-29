#include "lists.h"

/**
 * calculate_sum_listint - calculates the sum of all data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: the calculated sum
 */
int calculate_sum_listint(listint_t *head)
{
    int total_sum = 0;
    listint_t *current = head;

    while (current)
    {
        total_sum += current->n;
        current = current->next;
    }

    return total_sum;
}
