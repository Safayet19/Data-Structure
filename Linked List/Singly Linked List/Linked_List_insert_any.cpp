#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_any(Node* &head, int pos, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    if(temp == NULL)
    {
        temp = newNode;
        return;
    }
    for(int i = 1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print_list(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    print_list(head->next);
}
int main()
{
    Node *head = new Node(25);
    Node *a = new Node(14);
    Node *b = new Node(26);
    Node *c = new Node(29);
    Node *tail = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    print_list(head);
    cout<<endl;

    insert_any(head,3,54);
    print_list(head);


  return 0;
}