#include "lists.h"

/**
 * detect_listint_loop - detects the start of a loop in a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the node where the loop starts, or NULL if no loop
 */
listint_t *detect_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    if (!head)
        return NULL;

    while (slow && fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return fast;
        }
    }

    return NULL;
}
