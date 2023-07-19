#include "lists.h"
/**
 * insert_nodeint_at_index - adds new node to linked list
 *                           at given position
 * @head : pointer to head of list
 * @idx  : index of list where new node will be added
 *         (indices start at 0)
 * @n    : value for new node to be added
 * Return: pointer to new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
