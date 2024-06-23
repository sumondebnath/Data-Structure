#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void delete_from_head(Node* &head){
    if(head == NULL){
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void delete_from_tail(Node* &tail){
    if(tail == NULL){
        return;
    }
    Node* deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

void insert_at_any_position(Node* head, int pos, int val){
    Node* newNode = new Node(val);

    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void delete_from_any_position(Node* head, int pos){
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void print_head_to_tail(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_tail_to_head(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int pos;
        cout << "Enter Position : ";
        cin>> pos;

        if (pos == 0)
        {
            delete_from_head(head);
        }
        else if(pos == size(head)-1){
            delete_from_tail(tail);
        }
        else if(pos >= size(head)){
            cout<<"Invalid Index."<<endl;
        }
        else
        {
            delete_from_any_position(head, pos);
        }
        print_head_to_tail(head);
        print_tail_to_head(tail);
    }

    return 0;
}