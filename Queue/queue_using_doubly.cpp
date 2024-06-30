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

class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int size = 0;

    void Push(int val){
        size++;
        Node* newNode = new Node(val);
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
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int Front(){
        return head->val;
    }
    int Size(){
        return size;
    }
    bool Empty(){
        if(size == 0) return true;
        else return false;
    }
};

int main(){
    
    myQueue qu;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        qu.Push(val);
    }

    while(!qu.Empty()){
        cout<<qu.Front()<<" ";
        qu.Pop();
    }
    cout<<endl;

    return 0;
}