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

vector<int> v;

void level_node(Node *root, int num)
{
    if (root == NULL)
        return;

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();

        Node *parent = p.first;
        int level = p.second;

        if (num == level)
        {
            v.push_back(parent->data);
        }

        if (parent->left)
            q.push({parent->left, level + 1});
        if (parent->right)
            q.push({parent->right, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    int n;
    cin >> n;
    level_node(root, n);

    if (v.empty())
        cout << "Invalid";
    else
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
    }
}
