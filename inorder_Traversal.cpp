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
void preorder(Node* root)
{
    if(root == NULL)
    return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node* root = new Node(100);
    Node*  a = new Node(50);
    Node* b = new Node(40);
    Node* c = new Node(420);
    Node* d = new Node(540);

    root->left = a;
    root->right = b;
    
    a->left = c;
    a->right = d; 

    preorder(root);

  return 0;
}