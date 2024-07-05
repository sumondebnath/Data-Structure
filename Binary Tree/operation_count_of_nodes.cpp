#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val){
        this->val =val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_binary_tree(){
    int val; cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
            // first stage - line theke ana.
        Node* parent = q.front();
        q.pop();

            // second stage - jabotiyo jato kaj kora.
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

            // third stage - children gula ke line a rakaha.
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = count_nodes(root->left);
    int right = count_nodes(root->right);
    return left + right + 1;
}

int main(){

    Node* root = input_binary_tree();

    cout<<count_nodes(root)<<endl;
    
    return 0;
}