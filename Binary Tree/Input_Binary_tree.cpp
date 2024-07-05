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



Node* input_binaryTree(){
    int val; cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        int leftVal, rightVal;
        cin>>leftVal>>rightVal;
        Node* left;
        Node* right;
        if(leftVal == -1){
            left = NULL;
        }
        else{
            left = new Node(leftVal);
        }
        if(rightVal == -1){
            right = NULL;
        }
        else{
            right = new Node(rightVal);
        }

        parent->left = left;
        parent->right = right;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}




void print_levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        cout<<parent->val<<" ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}


void print_preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    print_preOrder(root->left);
    print_preOrder(root->right);
}


void print_postOrder(Node* root){
    if(root == NULL){
        return;
    }
    print_postOrder(root->left);
    print_postOrder(root->right);
    cout<<root->val<<" ";
}


void print_inOrder(Node* root){
    if(root == NULL){
        return;
    }
    print_inOrder(root->left);
    cout<<root->val<<" ";
    print_inOrder(root->right);
}



int main()
{

    Node* root = input_binaryTree();

    cout<<"Level-Order : ";
    print_levelOrder(root);
    cout<<endl;

    cout<<"Pre-Order : ";
    print_preOrder(root);
    cout<<endl;

    cout<<"Post-Oreder : ";
    print_postOrder(root);
    cout<<endl;

    cout<<"In-Order : ";
    print_inOrder(root);
    cout<<endl;

    return 0;
}