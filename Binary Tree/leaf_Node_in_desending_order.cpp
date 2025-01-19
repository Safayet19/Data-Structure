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
        root == NULL;
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

vector<int>v;
void leaf_Node(Node* root)
{
    if(root == NULL)
        return;
    if(!root->left && !root->right)
    {
        v.push_back(root->data);
        return;
    }
     leaf_Node(root->left);
     leaf_Node(root->right);
   

}

int main()
{
    Node* root = input_tree();
    leaf_Node(root);

    sort(v.begin(), v.end(), greater<int>());
    for(auto i : v)
    {
        cout<< i << " ";
    }
    
}