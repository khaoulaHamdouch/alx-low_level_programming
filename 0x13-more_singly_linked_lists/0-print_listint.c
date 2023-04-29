#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a poinet to the listint_t list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
    size_t num_nodes = 0;

    while (h)
    {
        num_nodes++;
        printf("%d\n", h->next);
        h = h->next;
    }
    return (num_nodes);
}