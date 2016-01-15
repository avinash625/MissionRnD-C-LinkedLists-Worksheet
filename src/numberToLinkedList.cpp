/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *root=NULL,*temp;
	if (N == 0)
	{
		root = (struct node *)malloc(sizeof(struct node));
		root->num = 0;
		root->next = NULL;
	}
	else
	{
		if (N<0)
			N = (-1)* N;
		while (N != 0)
		{
			temp = (struct node *)malloc(sizeof(struct node));
			temp->num = N % 10;
			temp->next = root;
			root = temp;
			N = N / 10;
		}
	}
	return root;
}