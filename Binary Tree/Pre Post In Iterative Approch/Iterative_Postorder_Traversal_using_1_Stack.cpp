/*
    Time Complexity : O(N),
    Space Complexity : O(2 * N).
*/

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

void PostOrder_Using_Stack(Node *root, vector<int> &v, stack<Node *> &st)
{
    Node *curr = root;

    while (curr != NULL or !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            Node *temp = st.top()->right;
            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                v.push_back(temp->val);

                while (!st.empty() and temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    v.push_back(temp->val);
                }
            }
            else
            {
                curr = temp;
            }
        }
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

    vector<int> v;
    stack<Node *> st;

    PostOrder_Using_Stack(root, v, st);

    for (int data : v)
    {
        cout << data << " ";
    }
    cout << endl;

    return 0;
}