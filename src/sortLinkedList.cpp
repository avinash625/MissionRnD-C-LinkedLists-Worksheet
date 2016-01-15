/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node * temp = head;
	if (head == NULL)
		return NULL;
	else if (head->next == NULL)
		return head;
	else
	{
		int num;
		for (temp = head; temp->next != NULL; temp = temp->next)
		{
			if (temp->num > temp->next->num)
			{
				num = temp->num;
				temp->num = temp->next->num;
				temp->next->num = num;
				sortLinkedList(head);
			}
		}
		return head;
	}
}