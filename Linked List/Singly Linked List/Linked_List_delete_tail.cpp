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
void delete_any(Node* &head, Node* &tail, int pos)
{
    Node* temp = head;
    for(int i = 1; i<pos; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;//temp is the node before deleting position
    temp->next = deleteNode->next;//or temp->next->next;
    delete deleteNode;
   
    tail = temp;
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

    delete_any(head,tail,4);
    print(head);

    cout<<endl;
    
    insert(head, tail, 548);
    print(head);
    return 0;
}