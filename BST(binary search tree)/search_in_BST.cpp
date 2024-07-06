/*
    BST searching time complexity :  O(h)       -> hear h means Height.
        here h is also -> log(n) for compleate binary tree
        and,
        h is also  -> (n)       for degenareted or left/right-skewed binary tree.
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
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_BST()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        Node *left;
        Node *right;
        if (leftVal == -1)
            left = NULL;
        else
            left = new Node(leftVal);

        if (rightVal == -1)
            right = NULL;
        else
            right = new Node(rightVal);

        parent->left = left;
        parent->right = right;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

bool search_in_bst(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (val < root->val)
    {
        bool left = search_in_bst(root->left, val);
        return left;
    }
    else
    {
        bool right = search_in_bst(root->right, val);
        return right;
    }
}

// level order print
void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        cout << parent->val << " ";

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

int main()
{

    Node *root = input_BST();

    // level_order(root);

    if (search_in_bst(root, 100))
        cout << "Value Found In The BST!" << endl;
    else
        cout << "Value Not Found In The BST!" << endl;

    return 0;
}