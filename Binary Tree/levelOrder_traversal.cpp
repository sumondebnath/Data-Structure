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

// three steps of implement level order traversal.
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1st: Line theke ana.
        Node *parent = q.front();
        q.pop();

        // line theke ana node or value diye jabotiyo ja kaj ache kora.
        cout << parent->val << " ";

        // current node ar children gula ke line a add kora.
        // left to right traversal
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);

        // right to left traversal
        // if(parent->right) q.push(parent->right);
        // if(parent->left) q.push(parent->left);
    }
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

    level_order(root);

    return 0;
}