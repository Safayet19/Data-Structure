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

void print_reverse(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout<<head->data<<" ";

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

    print_reverse(head);

  return 0;
}