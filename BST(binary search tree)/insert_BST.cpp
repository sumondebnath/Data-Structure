#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_BST(){
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
        if(leftVal == -1) left = NULL;
        else left = new Node(leftVal);

        if(rightVal == -1) right = NULL;
        else right = new Node(rightVal);

        parent->left = left;
        parent->right = right;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}



void insert_BST(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }
    if(val < root->val){
        if(root->left == NULL){
            root->left = new Node(val);
        }
        else{
            insert_BST(root->left, val);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(val);
        }
        else{
            insert_BST(root->right, val);
        }
    }
}



void print_level_order(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        cout<<parent->val<<" ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    cout<<endl;
}



int main(){

    Node* root = input_BST();

    insert_BST(root, 13);
    insert_BST(root, 12);
    insert_BST(root, 40);

    print_level_order(root);
    
    return 0;
}