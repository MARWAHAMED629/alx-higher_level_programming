#include "lists.h"
#include <stddef.h>

/**
 * reverse - t reverses the second half of list.
 *
 * @h_s: head of the second half
 * Return: no return.
 */
void reverse(listint_t **h_s)
{
listint_t *prvious;
listint_t *current;
listint_t *next;

prvious = NULL;
current = *h_s;

while (current != NULL)
{
next = current->next;
current->next = prvious;
prvious = current;
current = next;
}

*h_s = prvious;
}

/**
 * compare - it is compares each integer in the list
 *
 * @hs1: the head of the first half
 * @hs2: the head of the second half
 * Return: 1 if are equals, 0 if not
 */
int compare(listint_t *hs1, listint_t *hs2)
{
listint_t *temp1;
listint_t *temp2;

temp1 = hs1;
temp2 = hs2;

while (temp1 != NULL && temp2 != NULL)
{
if (temp1->n == temp2->n)
{
temp1 = temp1->next;
temp2 = temp2->next;
}
else
{
return (0);
}
}

if (temp1 == NULL && temp2 == NULL)
{
return (1);
}

return (0);
}

/**
 * is_palindrome - it  checks if a singly linked list
 * is a palindrome.
 * @h: the pointer to head of list
 * Return: 0 if it is not a palindrome,
 * 1 if it is a palndrome
 */
int is_palindrome(listint_t **h)
{
listint_t *slow, *fast, *prev_slow;
listint_t *scn_half, *mid;
int ispali;

slow = fast = prev_slow = *h;
mid = NULL;
ispali = 1;

if (*h != NULL && (*h)->next != NULL)
{
while (fast != NULL && fast->next != NULL)
{
fast = fast->next->next;
prev_slow = slow;
slow = slow->next;
}

if (fast != NULL)
{
mid = slow;
slow = slow->next;
}
scn_half = slow;
prev_slow->next = NULL;
reverse(&scn_half);
ispali = compare(*h, scn_half);

if (mid != NULL)
{
prev_slow->next = mid;
mid->next = scn_half;
}
else
{
prev_slow->next = scn_half;
}
}
return (ispali);
}
