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
   
   queue<Node*> q;

   if(root)
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();//parent
        q.pop();

        int l, r;
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
        
        p->left = leftChild;
        p->right = rightChild;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);

    }
    return root;


}

bool isSymmetric(Node* leftPart , Node* rightPart)
{
    if(!leftPart || !rightPart)
        return leftPart == rightPart;
    
    if(leftPart->data != rightPart->data)
        return false;

    return isSymmetric(leftPart->left , rightPart->right)&&
    isSymmetric(leftPart->right , rightPart->left);
}

int main()
{
    Node* root = input_tree();

    if(root == NULL)
        cout<<" No Tree";
    
    else
    {
        int result = isSymmetric(root->left,root->right);
        cout<<(result ? "Symmetric" : "Not Symmetric");
    }
}
//Symmetric : 1 2 2 3 4 4 3 -1 -1 -1 -1 -1 -1 -1 -1
//Not Symmetric: 1 2 2 3 4 3 4 -1 -1 -1 -1 -1 -1 -1 -1