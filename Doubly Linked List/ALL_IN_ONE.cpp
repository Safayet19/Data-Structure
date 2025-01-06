#include <bits/stdc++.h>
using namespace std;

struct Node 
{
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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    cout<<"Value Inserted\n";
}

void insert_tail(Node *&head, Node *&tail, int val)
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

    cout<<"Value Inserted\n";
}

void insert_any(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;

    cout<<"Value Inserted\n";

}

void search(Node *head, int key)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    Node* temp = head;
    while (temp)
    {
        if (temp->data == key)
        {
            cout << "Found\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Not Found\n";
}

void remove(Node *&head, Node *&tail, int key)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            if (temp == head) 
            head = head->next;
            
            if (temp == tail) 
            tail = tail->prev;

            if (temp->prev) 
            temp->prev->next = temp->next;
            
            if (temp->next) 
            temp->next->prev = temp->prev;
            delete temp;
            
            cout<<"Value deleted\n";
            return;
        }
        temp = temp->next;
    }
}

void middle(Node *head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    int size = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    int mid = size / 2;
    temp = head;
    for (int i = 0; i < mid; i++)
    {
        temp = temp->next;
    }
    cout << "Middle Node: " << temp->data <<endl;
}

void display(Node* head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    Node* temp = head;
    cout<<"The List are : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while (1)
    {
        cout << "\n\t1. Insert\n\t2. Search\n\t3. Remove\n\t4. Middle\n\t5. Display\n\t6. End\n\nEnter your choice: ";
        int opt, position, value;
        cin >> opt;
        switch (opt) 
        {
            case 1:
                cout << "Enter position and value: ";
                cin >> position >> value;
                if (position == 1)
                    insert_head(head, tail, value);
                else if (tail == NULL || position == 2)
                    insert_tail(head, tail, value);
                else
                    insert_any(head, position, value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                search(head, value);
                break;
            case 3:
                cout << "Enter value to remove: ";
                cin >> value;
                remove(head, tail, value);
                break;
            case 4:
                middle(head);
                break;
            case 5:
                display(head);
                break;
            case 6:
                cout << "Ended.\n";
                return 0;
            default:
                cout << "Invalid Option\n";
        }
    }
}
