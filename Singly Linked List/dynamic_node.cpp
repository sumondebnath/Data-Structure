#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    
    Node* Head = new Node(10);

    cout << Head->val<<endl;

    return 0;
}