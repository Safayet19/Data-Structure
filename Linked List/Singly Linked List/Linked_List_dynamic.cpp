#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
   Node *head =  new Node(100);
   Node *a = new Node(877);

   head->next = a;
   cout<<head->data<<" "<<a->data;


  return 0;
}