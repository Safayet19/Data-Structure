#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void delete_any(Node *head, int pos)
{
    Node *deleteNode = NULL;

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    deleteNode = temp->next;
    temp->next = deleteNode->next;

    deleteNode->next->prev = temp;//or temp->next->prev = temp
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num;
    while (cin >> num)
    {
        if (num == -1)
        {
            break;
        }
        insert(head, tail, num);
    }
    print(head);
    cout << endl;

    delete_any(head, 3);

    print(head);
    cout << endl;

    delete_any(head, 2);

    print(head);
    cout << endl;
}