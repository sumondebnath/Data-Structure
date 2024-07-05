#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

// In-order technic : left -> root -> right;
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main()
{
    // create Nodes
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    // creating connections
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    inOrder(root);

    return 0;
}