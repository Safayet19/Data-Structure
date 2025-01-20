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
Node* convert(int arr[], int left, int right)
{
    if(left>right)
        return NULL;
    
    int mid = (left + right)/2;
    Node* root = new Node(arr[mid]);

    Node* leftChild = convert(arr,left,mid-1);
    Node* rightChild = convert(arr, mid+1, right);

    root->left = leftChild;
    root->right = rightChild;

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
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    Node* root = convert(arr , 0, n-1);
    level_order_traversal(root);
    
  return 0;
}