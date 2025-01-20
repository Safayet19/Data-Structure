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
Node* input_tree()
{
    int n ;
    cin>>n;
    Node* root;

    if(n == -1)
        root = NULL;
    else
        root = new Node(n);
    
    queue<Node*>q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l , r;
        cin>>l>>r;

        Node* leftChild, *rightChild;
        if(l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);

        if(r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);
        
        parent->left = leftChild;
        parent->right = rightChild;

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);

    }
    return root;
}
void level_order_traversal(Node* root)
{
    if(root == NULL) return;

    queue<Node*>q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        cout<<parent->data<<" ";

        if(parent->left)
            q.push(parent->left);
        
        if(parent->right)
            q.push(parent->right);
    }
}
void insert(Node* &root, int n)
{
    if(root == NULL)
    {
      root = new Node(n);
    }
    if(n > root->data)
    {
        if(root->right == NULL)
        {
            root->right = new Node(n);
        }
        else
        insert(root->right , n);
    }
    else
    {
        if(root->left == NULL)
        {
            root->left = new Node(n);
        }
        else
            insert(root->left , n);
    }
    

}
int main()
{
    Node* root = input_tree();

    int n;
    cin>>n;
    insert(root , n);
    level_order_traversal(root);
    //Example: 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
    //insert : 6
}