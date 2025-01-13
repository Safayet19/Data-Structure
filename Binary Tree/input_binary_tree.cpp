#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

};
void level_order_traverse(Node* root)
{
    if(root == NULL)
    {
        cout<<"No Tree";
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->data<<" ";

        if(f->left) 
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

Node* input_tree()
{   
    //Take root
    int n;
    cin>>n;

    Node* root;
    //corner case check
    if(n == -1)
        root = NULL;
    else 
        root = new Node(n);
    
    queue<Node*>q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //Top of the queue is parent
        Node* parent = q.front();
        q.pop();

        //take child
        int l , r;
        cin>>l>>r;

        //create Node for child
        Node *LeftChild , *RightChild;

        if( l == -1)
            LeftChild = NULL;
        else
            LeftChild = new Node(l);
        
        if(r == -1)
            RightChild = NULL;
        else
            RightChild = new Node(r);
        
        //make connection with parent
        parent->left = LeftChild;
        parent->right = RightChild;

        //now push the child into queue

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
        
    }
    return root;
}
int main()
{
    Node* root = input_tree();
    level_order_traverse(root);
}
// Example input : 4 2 5 3 -1 7 6 -1 9 -1 -1 8 -1 1 -1 -1 -1 -1 -1