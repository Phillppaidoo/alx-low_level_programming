#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates sum of all data (n) of linked list
 * @head : pointer to head of the list
 * Return: sum of all data (n),
 *         or 0 - if list is empty
 */
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
