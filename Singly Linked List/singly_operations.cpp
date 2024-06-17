#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};



void insert_at_Head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_head(Node* &head){
    if(head==NULL){
        cout<<"Head not Available."<<endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}



void Insert_at_Tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}




void insert_at_any_Positions(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if(temp==NULL){
            cout<<"Invalid Index."<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    if(head==NULL){
        cout<<"Do not available any Position."<<endl;
        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if(temp==NULL){
            cout<<"Invalid Index."<<endl;
            return;
        }
    }
    if(temp->next==NULL){
        cout<<"Invalid Index."<<endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}




void Linked_List_Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}





int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "0 : Print Linked List." << endl;
        cout << "1 : Insert at Head." << endl;
        cout << "2 : Insert at Tail." << endl;
        cout << "3 : Insert at any Positions." << endl;
        cout << "4 : Delete at Head." << endl;
        cout << "5 : Delete From Position." << endl;
        cout << "6 : Exit." << endl;

        int op;
        cin >> op;

        if (op == 0)
        {
            Linked_List_Print(head);
        }
        else if (op == 1)
        {
            int val;
            cin >> val;
            insert_at_Head(head, val);
        }
        else if (op == 2)
        {
            int val;
            cin >> val;
            Insert_at_Tail(head, val);
        }
        else if (op == 3)
        {
            cout << "Enter Position and Value: " << endl;
            int pos, val;
            cin >> pos >> val;
            if (pos == 0)
            {
                insert_at_Head(head, val);
            }
            else
            {
                insert_at_any_Positions(head, pos, val);
            }
        }
        else if(op==4){
            delete_head(head);
        }
        else if (op == 5)
        {
            cout << "Enter Position." << endl;
            int pos;
            cin >> pos;
            if(pos==0){
                delete_head(head);
            }
            else{
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            break;
        }
        else{
            cout<<"Not a Valid Option, Please Try again."<<endl;
        }
    }

    return 0;
}