#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
    int data;
    Node* next;
};
void duplicatesremove(Node** head)
{
    if(head == NULL)
    {
        return;
    }
    Node* temp;
    Node* node = new Node();
    node = *head;
    while(node->next != NULL)
    {
        if(node->data == node->next->data)
        {
            temp = node->next->next;
            free(node->next);
            node->next = temp;


        }
        else
            node = node->next;
    }
}
void push(Node** head,int newdata)
{
    Node* temp = new Node();
    temp->data = newdata;
    temp->next = (*head);
    (*head) = temp;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data <<" ";
        head = head->next;
    }
}
int main()
{
    Node *head = nullptr;
    push(&head,10);
    push(&head,10);
    push(&head,10);
    push(&head,14);
    push(&head,14);
    push(&head,15);
    push(&head,18);
    push(&head,18);
    push(&head,18);
    duplicatesremove(&head);
    printlist(head);
}
