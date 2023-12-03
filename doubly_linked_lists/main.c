#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint(&head, 6);
    printf("After adding 6:\n");
    print_dlistint(head);
    printf("-> %lu elements\n", dlistint_len(head));

    add_dnodeint(&head, 9);
    printf("After adding 9:\n");
    print_dlistint(head);
    printf("-> %lu elements\n", dlistint_len(head));

    return (0);
}
