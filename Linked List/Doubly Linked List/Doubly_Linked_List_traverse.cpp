#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:

  int data;
  Node* prev;
  Node* next;

  Node(int val)
  {
    data = val;
    prev = NULL;
    next = NULL;
  }
};

void print_forward(Node* head)
{
  Node* temp = head;

  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
void print_reverse(Node* tail)
{
  Node* temp = tail;

  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->prev;
  }
}
int main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* tail = new Node(40);

  head->next = a;
  a->prev = head;

  a->next = b;
  b->prev = a;

  b->next = tail;
  tail->prev = b;

  print_forward(head);
  cout<<endl;

  print_reverse(tail);
  cout<<endl;


  return 0;
}