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


Node* convert_BST(int arr[], int n, int left, int right){
    if(left > right){
        return NULL;
    }
    int mid = (left + right) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = convert_BST(arr, n, left, mid-1);
    Node* rightRoot = convert_BST(arr, n, mid+1, right);

    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}


void print_levelOrder(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        cout<<parent->val<<" ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    cout<<endl;
}


int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Node* root = convert_BST(arr, n, 0, n-1);

    print_levelOrder(root);
    
    return 0;
}