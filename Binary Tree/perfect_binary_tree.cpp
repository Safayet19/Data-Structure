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
    int n;
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

        Node* leftChild , *rightChild;

        if(l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);
        
        if(r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);
        
        parent->left = leftChild;
        parent->right =rightChild;

        if(parent->left)
            q.push(parent->left);
        
        if(parent->right)
            q.push(parent->right);
    }
    return root;

}

int depth(Node* root)
{
    if(root == NULL)
        return 0;
    if(!root->left && !root->right)
    {
        return 1;
    }
    
    int l = depth(root->left);
    int r = depth(root->right);

    return max(l,r) + 1;
}

int total_node(Node* root)
{
    if(root == NULL)
    return 0;

    int l = total_node(root->left);
    int r = total_node(root->right);

    return l + r +1;

}
int main()
{
    Node* root = input_tree();
    int d = depth(root);

    int total = total_node(root);
    int node = pow(2, d) - 1;

    if(total == node)
        cout<<"YES";
    else
        cout<<"NO";
  
}