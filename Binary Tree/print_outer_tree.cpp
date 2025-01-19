#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *input_tree()
{
    int n;
    cin >> n;
    Node *root;

    if (n == -1)
        root = NULL;
    else
        root = new Node(n);
        
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftChild, *rightChild;

        if (l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);

        if (r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);

        parent->left = leftChild;
        parent->right = rightChild;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

vector<int>v;
void left_part(Node *root)
{
    int freq[10005] = {false};
    queue<pair<Node *, int>> q;
    
    if (root)
        q.push({root, 0});
        
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        
        Node *parent = p.first;
        int level = p.second;
        
        if (freq[level] == false)
        {
            v.push_back(parent->data);
            freq[level] = true;
        }
        if (parent->left)
            q.push({parent->left, level + 1});
        
        else if (parent->right)
            q.push({parent->right, level + 1});
        
        
    }

}
void right_part(Node *root)
{
    int freq[10005] = {false};
    queue<pair<Node *, int>> q;
    
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        
        Node *parent = p.first;
        int level = p.second;
        
        if (freq[level] == false)
        {
            v.push_back(parent->data);
            freq[level] = true;
        }
        if (parent->right)
            q.push({parent->right, level + 1});
        
        else if (parent->left)
            q.push({parent->left, level + 1});
    }

}

int main()
{
    Node *root = input_tree();
    
    if(root->left)
    left_part(root->left);

    reverse(v.begin(), v.end());
    
    v.push_back(root->data);

    if(root->right);
    right_part(root->right);

    for (auto i : v)
    {
        cout << i << " ";
    }
}
