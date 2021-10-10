// CPP program to find middle element of a linked list

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int data;
	Node* next;
};

/* Returns the pointer
to the middle node. */

Node* getMidNode(Node* head)
{
	Node* slow=head;
  Node* fast=head;
	while(fast->next!=nullptr && fast->next->next!=nullptr)
  {
     slow = slow->next;
     fast = fast->next->next;
  }
  return slow;
}

/* UTILITY FUNCTIONS */
/* Function to push a node */

void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print linked list */
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Created Linked list
	is 1->2->3->4->5->6->7->8->9 */
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
  push(&head,0);
	cout << "Given linked list \n";
	printList(head);
	Node* midNode = getMidNode(head);

	cout << midNode->data;
	printList(head);

	return (0);
}
