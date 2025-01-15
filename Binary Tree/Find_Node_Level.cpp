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

        if(l==-1)
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
int level_order(Node* root , int target)
{
    if(root == NULL)
        return 0;
    
    queue<pair<Node*,int>>q;

    q.push({root, 1});//keep tracking of level

    while(!q.empty())
    {
        pair<Node* , int> p = q.front();
        q.pop();

        Node* parent = p.first;
        int level = p.second;

        if(parent->data == target)
            return level;

        if(p.first->left)
            q.push({p.first->left, level+1});
        
        if(p.first->right)
            q.push({p.first->right, level+1});
        
    }
    return 0;

}
int main()
{
    Node* root = input_tree();
    int target;
    cin>>target;

    int ans = level_order(root, target);

    cout<<ans;
  return 0;
}