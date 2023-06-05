#ifndef LISTS_H
#define LISTS_H

#include<stdlib.h>

/**
 *struct listint_s - singly linked list
 @n: interger
 @next: points to the next node
 *
 * Description: singly linked list node structure
 * for holberton project
 */
typedef struct listint_s
{
	int n;
	struc listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);
list_t *add_nodeint(listint_t **head, cont int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#end /* LISTS_H */

