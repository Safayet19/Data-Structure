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
bool search(Node* root , int n)
{
    if(root == NULL)
        return false;
    if(n == root->data)
        return true;
    if(n > root->data)
        return search(root->right,n);
    else
        return search(root->left , n);
}
int main()
{
    Node* root = input_tree();

    int n;
    cin>>n;

    cout<<(search(root, n)?"Found" : "Not Found");
    
    //Example: 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
    //target : 15
}