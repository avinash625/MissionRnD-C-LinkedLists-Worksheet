/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){

	int value[3] = { 0 };
	struct node *temp;
	temp = head;
	if (head == NULL)
		return;
	else
	{
		for (temp = head; temp != NULL; temp = temp->next)
			value[temp->data] = value[temp->data] + 1;
		for (temp = head; value[0] > 0; temp = temp->next, value[0]--)
			(temp->data) = 0;
		for (; value[1] > 0; temp = temp->next, value[1]--)
			(temp->data) = 1;
		for (; value[2] > 0; temp = temp->next, value[2]--)
			(temp->data) = 2;
	}

}