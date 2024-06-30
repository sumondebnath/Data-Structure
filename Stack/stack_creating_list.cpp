#include<bits/stdc++.h>
using namespace std;

class myStack{
    list<int> myList;
    public:
        void Push(int val){
            myList.push_back(val);
        }
        void Pop(){
            myList.pop_back();
        }
        int Top(){
            return myList.back();
        }
        int Size(){
            return myList.size();
        }
        bool Empty(){
            if(myList.size() == 0) return true;
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
    
    return 0;
}