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
        Node* p = q.front();
        q.pop();

        int l, r;
        cin>>l>>r;

        Node* LeftChild, *RightChild;

        if(l == -1)
            LeftChild = NULL;
        else
            LeftChild = new Node(l);
        
        if(r == -1)
            RightChild = NULL;
        else
            RightChild = new Node(r);
        
        p->left = LeftChild;
        p->right = RightChild;
        
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

int count_nodes(Node* root)
{
    if(root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}
int main()
{
    Node* root = input_tree();

    int result = count_nodes(root);

    cout<<result;
}

// Example input : 4 2 5 3 -1 7 6 -1 9 -1 -1 8 -1 1 -1 -1 -1 -1 -1