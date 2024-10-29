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

stack<pair<Node *, int> > st;
vector<int> preOrder, inOrder, postOrder;

void Pre_In_Post(Node *root)
{

    st.push({root, 1});
    if (root == NULL)
        return;

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        if (it.second == 1)
        {
            preOrder.push_back(it.first->val);
            it.second++;
            st.push(it);

            if (it.first->left != NULL)
            {
                st.push({it.first->left, 1});
            }
        }
        else if (it.second == 2)
        {
            inOrder.push_back(it.first->val);
            it.second++;
            st.push(it);

            if (it.first->right != NULL)
            {
                st.push({it.first->right, 1});
            }
        }
        else
        {
            postOrder.push_back(it.first->val);
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
    

    Pre_In_Post(root);

    cout<<"Pre-Order Traversal"<<endl;
    for(int pre : preOrder){
        cout<<pre<<" ";
    }
    cout<<endl<<endl;

    cout<<"Post-Order Traversal"<<endl;
    for(int post : postOrder){
        cout<<post<<" ";
    }
    cout<<endl<<endl;

    cout<<"In-Order Traversal"<<endl;
    for(int in : inOrder){
        cout<<in<<" ";
    }
    cout<<endl<<endl;

    return 0;
}