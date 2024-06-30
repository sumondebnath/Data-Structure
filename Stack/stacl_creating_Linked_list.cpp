#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;

    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int size = 0;

    void Push(int val){
        Node* newNode = new Node(val);
        size++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void Pop(){
        size--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        delete deleteNode;
    }
    int Top(){
        return tail->val;
    }
    int Size(){
        return size;
    }
    bool Empty(){
        if(size==0) return true;
        else return false;
    }
};

int main(){
    myStack Stack;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        Stack.Push(val);
    }

    while(!Stack.Empty()){
        cout<<Stack.Top()<<" ";
        Stack.Pop();
    }
    cout<<endl;

    // Stack.Push(10);
    // Stack.Push(20);
    // Stack.Pop();
    // cout<<Stack.Top();
    
    return 0;
}