#include<bits/stdc++.h>
using namespace std;

 class Node
 {
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
    // Node(int data)
    // {
    //     this->data = data;
    //     this->next = NULL;
    // }
 };
int main()
{
    Node a(100), b(200), c(300);
    a.next = &b;
    b.next = &c;

    cout<<a.data<<" "<<b.data<<" "<<c.data;


  return 0;
}