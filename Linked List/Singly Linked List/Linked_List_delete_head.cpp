#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}

void delete_head(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    while ((cin >> n))
    {
        if (n == -1)
        {
            break;
        }
        insert(head, tail, n);
    }
    print(head);
    cout<<endl;

    delete_head(head);
    print(head);

    return 0;
}