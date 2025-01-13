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

class myQueue
{
public:
    int size;

    myQueue()
    {
        size = 0;
    }

    void push(int val, Node *&head, Node *&tail)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void pop(Node *&head)
    {
        if (head != NULL)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            size--;
        }
    }

    int top(Node *tail)
    {
        if (tail != NULL)
        {
            return tail->data;
        }
        throw runtime_error("Queue is empty.");
    }

    int getSize()
    {
        return size;
    }

    bool empty(Node *&head)
    {
        return head == NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    myQueue q;

    int num;
    while (cin >> num)
    {
        q.push(num, head, tail);
    }

    while (!q.empty(head))
    {
     cout<<q.top(head)<<" ";
     q.pop(head);
    }
}
