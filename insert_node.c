// A complete working C program to demonstrate all insertion methods
// on Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
};


void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));


	new_node->data = new_data;


	new_node->next = (*head_ref);


	(*head_ref) = new_node;
}




void printList(struct Node *node)
{
while (node != NULL)
{
	printf(" %d ", node->data);
	node = node->next;
}
}


int main()
{

struct Node* head = NULL;

append(&head, 6);


push(&head, 7);


push(&head, 1);


append(&head, 4);


insertAfter(head->next, 8);

printf("\n Created Linked list is: ");
printList(head);

return 0;
}
