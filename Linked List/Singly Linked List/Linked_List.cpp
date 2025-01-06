#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node a, b, c;

    a.data = 10;
    a.next = &b;

    b.data = 20;
    b.next = &c;

    c.data = 30;
    c.next = NULL;

    cout << a.data << endl;
    cout<<(*a.next).data<<endl;
    cout << a.next->data;

    return 0;
}