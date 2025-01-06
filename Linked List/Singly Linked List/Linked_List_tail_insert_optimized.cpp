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
void insert_tail(Node* &tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}
void print_list(Node* head)
{
   Node* temp = head;

   while(temp != NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
    

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
    insert_tail(tail, 100);
     print_list(head);


  return 0;
}