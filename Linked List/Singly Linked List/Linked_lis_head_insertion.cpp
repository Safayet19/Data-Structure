#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insert_head(Node* &head, int value)//take as original list using &//
{
   Node* newNode =  new Node(value);
   newNode->next = head;
   head = newNode;
}
void print_Linked_list(Node* head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* a = new Node(100);
    Node* b = new Node(200);
    Node* c = new Node(300);
    
    a->next = b;
    b->next = c;

    print_Linked_list(a);
    cout<<endl;
   
    insert_head(a,10);
    insert_head(a,20);
   
    print_Linked_list(a);
    cout<<endl;
}